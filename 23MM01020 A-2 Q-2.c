#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter x,y,z:");
    scanf("%d%d%d",&x,&y,&z);
    (x>y && x>z)?printf("Greatest among three is %d",x): (y>z ? printf("Greatest among three is %d",y): printf("Greatest among three is %d",z));
    return 0;

}

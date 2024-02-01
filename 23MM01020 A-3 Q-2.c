#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter x,y&z:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is largest among 3",x);
    }
    else if(y>x && y>z){
        printf("%d is largest aamong 3",y);
    }
    else{
        printf("%d is largest among 3",z);
    }
    return 0;
}
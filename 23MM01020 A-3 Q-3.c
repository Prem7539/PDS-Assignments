#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter sides of triangle:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && x+z>y){
        printf("%d %d %d are sides of a triangle",x,y,z);
    }
    else{
        printf("%d %d %d are not sides of a triangle",x,y,z);
    }
    return 0;
}
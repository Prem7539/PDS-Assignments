#include <stdio.h>
int main(){
    int x1,x2,x3;
    int y1,y2,y3;
    printf("Enter coordinate x1,y1 :");
    scanf("%d%d",&x1,&y1);
    
    printf("Enter coordinate x2,y2 :");
    scanf("%d%d",&x2,&y2);
    
    printf("Enter coordinate x3,y3 :");
    scanf("%d%d",&x3,&y3);
    
    if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)){
        printf("The three points fall on a straight line");
    }
    else{
        printf("The three coordinates does not fall on a straight line");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);
    if(x%2==0 && x!=0){
        printf("%d is an even no",x);   
    }
    else if(x%2 != 0){
        printf("%d is an odd no",x);   
    }
    else if(x==0){
        printf("%d is zero",x);
    }
    return 0;
}
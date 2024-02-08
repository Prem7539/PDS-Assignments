#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter three integers :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is largest among three",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d is largest among three",n2);
    }
    else{
        printf("%d is largest among three",n3);
    }
    return 0;
}
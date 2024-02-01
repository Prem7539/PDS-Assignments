#include <stdio.h>
int main(){
    int x;
    printf("Enter a no");
    scanf("%d",&x);
    (x&1)==0 ? printf("It is an even no") : printf("It is an odd no");
    return 0;
}
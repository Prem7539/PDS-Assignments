#include <stdio.h>
int main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);
    (x>=100 && x<=200) && x%2 != 0 ? printf("True") : printf("False");
    return 0;

}
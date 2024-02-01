#include <stdio.h>
int main(){
    int a;
    int b,c,d;
    printf("Enter base cost of meal:");
    scanf("%d",&a);
    b = 0.15 * a;
    c = 0.08 * a;
    d = a+b+c;
    printf("Tip rate is %d \n",b);
    printf("Tax rate is %d \n",c);
    printf("Total cost of meal is %d \n",d);
    scanf("%d%d%d",&b,&c,&d);
    return 0;


}
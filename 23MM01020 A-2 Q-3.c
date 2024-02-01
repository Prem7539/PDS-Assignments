#include <stdio.h>
int main(){
    int x;
    int y,m,w,d;
    printf("Enter total no days:");
    scanf("%d",&x);
    
    y = x/365;
    m = (x%365)/30;
    w = ((x%365)%30)/7;
    d = ((x%365)%30)%7;

    printf("Years = %d \n",y);
    printf("Months =%d \n",m);
    printf("Weeks =%d \n",w);
    printf("Days =%d \n",d);
    return 0;

}
#include <stdio.h>
int main(){
    float cs,cb,i;
    printf("Enter your credit score :");
    scanf("%f",&cs);
    printf("Enter your current balance :");
    scanf("%f",&cb);
    if(cs<600){
        printf("Your interest rate is 15 percent and calculated interest is %f",0.15*cb);
    }
    else if(cs>=600 && cs<=750){
        printf("Your interest rate is 12 percent and calculated interest is %f",0.12*cb);
    }
    else if(cs>750 && cs<=900){
        printf("Your interest rate is 10 percent and calculated interest is %f",0.1*cb);
    }
    else{
        printf("Wrong credit score entered");
    }
}
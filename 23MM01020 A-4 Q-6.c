#include <stdio.h>
int main(){
    float num1,num2;
    char operator;
    printf("Enter operation you want to perform(+,-,*,/) :");
    scanf("%c",&operator);
    printf("Enter 1st integer");
    scanf("%f",&num1);
    printf("Enter 2nd integer");
    scanf("%f",&num2);
    switch(operator){
        case '+' : printf("%f + %f is %f",num1,num2,num1+num2);
            break;
        case '-' : printf("%f - %f is %f",num1,num2,num1-num2);
            break;
        case '*' : printf("%f * %f is %f ",num1,num2,num1*num2);
            break;
        case '/' : printf("%f / %f is %f",num1,num2,num1/num2);
            break;
        default : printf("Wrong operation");
        
    }
    return 0;

}
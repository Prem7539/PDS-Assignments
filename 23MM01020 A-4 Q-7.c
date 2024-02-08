#include <stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age<5){
        printf("You are free to enter in the park.");
    }
    else if(age>=5 && age <=12){
        printf("You have to pay Rs 20 as ticket price for entering in the park.");
    }
    else if(age>=13 && age<60){
        printf("You have to pay Rs 50 as standard rate for entering in the park.");
    }
    else if(age>=60 && age <=100){
        printf("You are a senior citizen so you'll get a discount of 20 percent and so you have to pay Rs 40 as ticket price.");
    }
    else{
        printf("Wrong age entered");
    }
    return 0;
    }

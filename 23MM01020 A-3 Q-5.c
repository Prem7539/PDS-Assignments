#include <stdio.h>
int main(){
    int n;
    printf("Enter how many days you are late :");
    scanf("%d",&n);
    if(n>=1 && n<=5){
        printf("You have to pay Rs 1 as fine");
    }
    else if(n>5 && n<=10){
        printf("You have to pay Rs 2 as fine");
    }
    else if(n>10 && n<=30){
        printf("You have to pay Rs 5 as fine");
    }
    else{
        printf("You have to pay Rs 5 as fine and your membership is cancelled.");
    }
    return 0;
}
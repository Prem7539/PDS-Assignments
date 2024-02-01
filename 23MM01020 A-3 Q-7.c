#include <stdio.h>
int main(){
    float m,n,k;
    float t,w;
    printf("Enter marks obtained :");
    scanf("%f",&m);
    printf("Enter no of classes attented :");
    scanf("%f",&n);
    printf("Enter total no of classes :");
    scanf("%f",&k);
    t=m*(n/k);
    if(t>=90 && t<=100){
        printf("Grade = Ex");
    }
    else if(t>=80 && t<=89){
        printf("Grade = A");
    }
    else if(t>=70 && t<=79){
        printf("Grade = B");
    }
    else if(t>=60 && t<=69){
        printf("Grade = C");
    }
    else if(t>=50 && t<=59){
        printf("Grade = D");
    }
    else if(t>=40 && t<=49){
        printf("Grade = P");
    }
    else{
        printf("Grade = F");
    }
    printf("\n %f",t);
    return 0;
}
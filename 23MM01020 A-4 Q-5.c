#include <stdio.h>
int main(){
    int num;
    int rem,sum=0,cube,save;
    printf("Enter a number between 100 and 999 :");
    scanf("%d",&num);
    if(num<100 || num>999){
        printf("Incorrect input entered ");
    }
    else{
    save=num;
    for(num;num>0;num/=10){
        rem=num%10;
        cube=rem*rem*rem;
        sum=sum+cube;
    }
    if(sum==save){
        printf("%d is an armstrong number",save);
    }
    else{
        printf("%d is not an armstrong number",save);
    }
    }
    return 0;
}
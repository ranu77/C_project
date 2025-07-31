#include<stdio.h>

int main(){
    int val=0;
    int digit=0;
    int count=0;
    int sum=0;
    
    printf("enter number :");
    scanf("%d",&val);

    int i=val;

    while(i>0){
        digit=i%10;
        sum=sum+digit;
        i=i/10;
    }

    printf("sum of digits are %d",sum);

    return 0;
}
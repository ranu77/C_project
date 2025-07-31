#include<stdio.h>

int main(){
    int val=0;
    
    int count=0;
    
    printf("enter number :");
    scanf("%d",&val);

    int i=val;

    while(i>0){
        
        count++;
        i=i/10;
    }

    printf("number of digits are %d",count);

    return 0;
}

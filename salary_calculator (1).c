#include<stdio.h>
int main(){
    float salary = 100, hra = 0, da = 0, ta = 0, gross_sal = 0;
    
   hra = salary * 10 / 100;
   da = salary * 5 / 100;
   ta = salary * 8 / 100;
   gross_sal = salary + hra + da + ta;
    printf("gross salary is: %f",gross_sal);
    return 0;
}
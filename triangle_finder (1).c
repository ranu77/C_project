#include<stdio.h>
int main()
{
    int first_angle = 65, second_angle = 45, third_angle = 0;

    third_angle = 180 - (first_angle + second_angle);
    printf("third_angle is: %d",third_angle);
}
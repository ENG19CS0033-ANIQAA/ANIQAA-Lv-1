//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>

int main()
{
    float h,b,d;
    printf("Enter the values of h,b,d");
    scanf("%f%f%f",&h,&b,&d);
    float vol=1/3*((h*d*b)+d/b);
    printf("The volume is %f",vol);

    return 0;
}

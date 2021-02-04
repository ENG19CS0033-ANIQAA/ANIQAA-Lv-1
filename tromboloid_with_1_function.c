//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>

int main()
{
    float h,b,d,vol;
    printf("Enter the values of h,b,d");
    scanf("%f%f%f",&h,&b,&d);
    vol=((h*d*b)+(d/b))/3;
    printf("The volume is %f",vol);
    return 0;
}

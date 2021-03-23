//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{ 
    float p;
    printf("enter the values\n");
    scanf("%f",&p);
    return p;
}
float volume( float h,float b,float d)
{
   float volume;
   volume=((h*b*d)+(b/d))/3;
   return volume;
}
int output(float volume)
{
   printf("the volume of the tromboloid is %f",volume);
   return 0;
}
int main()
{
   float a,b,c,vol
   a=input();
   b=input();
   c=input();
   vol=volume(a,b,c);
   output(vol);
   return 0
}

//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
float two_d(float y1,float y2,float z1,float z2)
{
 float dist;
 dist=sqrt((y2-y1)(y2-y1)+(z2-z1)(z2-z1));
 return dist;
}
float input()
{
 float n;
 printf("enter the coordinates\n");
 scanf("%f",&n);
 return n;
}
void output(float p)
{
printf("the distance is %f",p);
}
int main()
{
 float p1,p2,q1,q2,1d;
 p1=input();
 p2=input();
 q1=input();
 q2=input();
 1d=two_d(p1,p2,q1,q2);
 output(1d);
 return 0;
}

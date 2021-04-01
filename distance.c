//WAP to find the distance between two point using 4 functions.


#include<stdio.h>
#include<math.h>
float dist( float y1,float z1,float y2,float z2)
{
    float d;
    d= sqrt(((y2-y1) * (y2-y1))+((z2-z1) * (z2-z1)));
    return d;
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
    float p1,p2,q1,q2,d;
    p1=input();
    p2=input();
    q1=input();
    q2=input();
    d=dist(p1,p2,q1,q2);
    output(d);
    return 0;
}

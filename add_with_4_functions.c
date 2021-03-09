//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
int a;
printf("Enter a Number\n");
scanf("%d",&a);
return a;
}
int find_sum(int p, int q)
{
int sum;
sum =p+q;
return sum;
}
void output(int p,int q,int r)
{
printf("Sum of %d + %d is %d\n",a,b,c);
}
int main()
{
int a,b,c;
a=input();
b=input();
c=find_sum(a,b);
output(a,b,c)
return 0;
}

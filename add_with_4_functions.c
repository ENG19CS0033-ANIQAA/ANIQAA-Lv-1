//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter the total number of numbers\n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
printf("Enter %d number\n",(i+1));
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The final sum is %d\n",sum);
return 0;
}

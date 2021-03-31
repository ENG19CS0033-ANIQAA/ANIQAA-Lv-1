//WAP to find the sum of two fractions.
#include<stdio.h>
struct frac
{
float num,den;
};
struct frac input()
{
struct frac n;
printf("enter numerator");
scanf("%f",&n.num);
printf("enter denominator");
scanf("%f",&n.den);
return a;
}
struct frac sm()
{
struct frac a,struct frac b,struct frac res;
float gcd;
res.den=a.den*b.den;
res.num=(a.num*b.den)+(b.num*a.den);
gcd=hcf(res.num,res.den);
res.deno=res.deno/gcd;
res.num=res.num/gcd;
return res;
}
hcf(int a,int b)
{
float gcd=1;
float i=2
do
{
if(a%i==0&&b%i==0)
gcd=i;
i++;
}
while(i<=a&&i<=b);
return gcd;
}
void out(struct frac a,struct frac b,struct frac c)
{
printf("sum of %f %fand %f%f is %f%f",a.num,a.den,b.num,b.den,c.num,c.den);
}
float main()
{
struc frac a,b,c;
a=input();
b=input();
c=sm(a,b);
out(a,b,c);
return 0;
}


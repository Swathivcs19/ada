#include<stdio.h>
int gcd(int m,int n)
{
if(n==0)
	return m;
else
	return gcd(n,m%n);
}
void main()
{
 int a,b,res;
 printf("enter the values of a,b");
 scanf("%d %d",&a,&b);
 res=gcd(a,b);
 printf("gcd of numbers is %d",res);
}


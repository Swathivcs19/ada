#include<stdio.h>
int gcd(int m,int n)
{
while(m==n)
{
if(m>n)
	return gcd(m-n,n);
else
	return gcd(m,n-m);
}
}
void main()
{
	int a,b,res;
	printf("enter the values of a,b");
	scanf("%d %d",&a,&b);
	res=gcd(a,b);
	printf("gcd of two numbers is %d",res);
}

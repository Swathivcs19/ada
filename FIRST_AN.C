#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int first(ina a[],int low,int high,int x,int n)
{
	int mid;
	if(high>=low)
	{
		mid=(low+high)/2;
		if((mid==0 || x>a[mid-1]) && a[mid]==x)
		{
			printf("fisrt occurence: %d",mid);
			return mid;
		}
		else if(x>a[mid])
		return first(a,(mid+1),high,x,n);
		else
		return first(a,low,(mid-1),x,n);
	}
	return -1;
}
int last(int a[],int low,int high,int x,int n)
{
	int mid;
	if(high>=low)
	{
		mid=(low+high)/2;
		if((mid==n-1 || x<a[mid+1]) && a[mid]==x)
		{
			printf("\nlast occurence %d",mid);
			return mid;
		}
		else if(x<a[mid])
		return last(a,low,(mid-1),x,n)
		else
		return last(,(mid+1),high,x,n);
	}
}

int count(int a[],int n,int x)
{
	int i;
	int j;
	i=first(a,0,n-1,x,n);
	if(i==-1)
		return i;
	j=last(a,i,n-1,x,n);
		return j-i+1;
}

int main()
{
	int a[1000],n;
	int i,k,c;
	printf("\nenter the size of the array:");
	scanf("%d",&n);
	printf("enter %d elements in ascending order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key to be searched \n");
	scanf("%d",&k);
	c=count(a,n,k);
	if(c!=-1)
	{
		printf("element %d occurs %d times",k,c);
	}
	else
	{
		printf("\n%d",c);
	}
	return 0;
}

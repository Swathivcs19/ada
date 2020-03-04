#include<stdio.h>
#include<time.h>
void insertion(int m[],int n)
{

	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=m[i];
		j=i-1;
		while(j>=0&&m[j]>key)
		{
		 m[j+1]=m[j];
		 j=j-1;
		}
	m[j+1]=key;
	}
}
void meeting()
{
	int i,j,m1[20],m2[20],n1;
	printf("enter the num of meetings\n");
	scanf("%d",n1);
	printf("enter the start time of meetings\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&m1[i]);
	}
	insertion(m1,n1);
	printf("enter the end time of meetings\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&m2[i]);
	}
	insertion(m2,n1);
	for(i=0;i<n1;i++)
	{
	if(m1[i+1]>m2[i])
	{
		printf("%d %d",m1[i],m2[i]);
	}
	}
}
	
	
	
	
	
	

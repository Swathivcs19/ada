#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100][100];
int reach[100],n;
int i,j;
void dfs(int v)
{
	reach[v]=1;
	for(i=1;i<=n;i++)
	if(a[v][i] && !reach[i])
	{
		printf("%d->%d",v,i);
		dfs(i);
	}
}

int main()
{
	int count=0;
	int v;
	printf("enter the num of vertices\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		reach[i]=0;
		for(j=1;j<=n;j++)
		{
			a[i][j]=0;
		}
	}
	printf("enter the starting vertex:");
	scanf("%d",&v);
	dfs(1);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		if(reach[i])
		count++;
	}
	if(count==n)
	{
		printf("\ngraph is connected..\n");
	}
	else
	{
		printf("graph is not connected\n");
	}
	return 0;
}
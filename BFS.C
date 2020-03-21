#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100][100],q[100],visited[100];
int i,j,n;
int f=0;r=-1,start;
void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(a[v][i] && !visited[i])
		{
			q[++r]=i;
		}
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}

int main()
{
	printf("enter the num of vertices\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("enter the details of the graph in matrix form\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("enter the startinf vertex\n");
	scanf("%d",&start);
	bfs(start);

	printf("the nodes which are reachable using bfs traversal :\n");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
			printf("%d\n",i);
		else
		{
			printf("\n %d is not reachable..!",i);
		}
	}
	printf("\n");
	return 0;
}



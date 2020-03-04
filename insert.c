#include<stdio.h>
#include<time.h>
void insert(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
		 a[j+1]=a[j];
		 j=j-1;
		}
	a[j+1]=key;
	}
}

void main()
{
	clock_t start,end;
	int i,j,n1,ar[20];
	printf("enter the size of array\n");
	scanf("%d",&n1);
	printf("enter the elements of array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ar[i]);
	}
	start=clock();
	insert(ar,n1);
	end=clock();
	printf("sorted array is;\n");
for(i=0;i<n1;i++)
{
	printf("%d\n",ar[i]);
}
printf("the time taken to run this program is %d",(end-start)/CLOCKS_PER_SEC);
}
	

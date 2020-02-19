#include<stdio.h>
#include<time.h>
void selection(int arr[],int n)
{
	int i,j,min,small;
	for(i=0;i<n-1;i++)
	{
	small=arr[i];
	min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<small)
			{
				small=arr[j];
				min=j;
			}
			swap(&arr[min],&arr[i]);
		}
	}
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void main()
{
	clock_t t1,t2;
	int a[20],i,size,k;
	double time;
	printf("printf enter the size of array\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	t1=clock();
	selection(a,size);
	t2=clock();

	printf("sorted elements are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("the time taken by this program is %d seconds\n",t2-t1);
	printf("enter the number of largest elements to be printed\n");
	scanf("%d",&k);
	for(i=size;i>size-k;i--)
	{
		printf("%d",a[i]);
	}
}




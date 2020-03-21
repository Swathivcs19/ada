#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void swap(int A[],int *a,int *b)
{
	int temp;
	temp=A[*a];
	A[*a]=A[*b];
	A[*b]=temp;
}
int partition(int A[],int low,int high)
{
	int pivot;
	int i,j;
	pivot=A[low];
	i=low;
	j=high;
	while(i<=j)
	{
		while(A[i]<=pivot)
			i++;
		while(A[j]>pivot)
			j--;
		if(i<j)
			swap(A,&i,&j);
	}
	swap(A,&low,&j);
	return j;
}
void quick_sort(int A[],int low,int high)
{
int j;
	if(low>high)
	{
		j=partition(A,low,high);
		quick_sort(A,low,j-1);
		quick_sort(a,j+1,high);
	}
}
int main()
{
	int A[1000],n;
	int i,j;
	clock_t start,end;
	double time_req;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	start=clock();
	quick_sort(A,0,n-1);
	end=clock();
	time_req=((double)(end-start))/CLOCKS_PER_SEC;
	printf("time required to sor is %f",time_req);
	return 0;
}
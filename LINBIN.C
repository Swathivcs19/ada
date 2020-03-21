#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int linear(int a[],int l,int r,int key)
{
	if(r<l)
		return -1;
	if(a[l]==key)
		return l;
	if(a[r]==key)
		return r;
	return liner(a,l+1,r-1,key);
}

int bin(int a[],int l,int r,int key)
{
	if(r>=1)
	{
		int mid=1+(r-l)/2;
		if(a[mid]==key) return mid;
		if(a[mid]>key)
			return bin(a,l,mid-1,key);
		else
			return bin(a,mid+1,r,key);
	}
	return -1;
}

int main()
{
	int a[1000],k;
	int n,i;
	int choice;
	clock_t start,end;
	double time_req;
	printf("\nthe choices are\n");
	printf("1:linear search\n2.binary search\n");
	printf("enter your choices\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter the size of array\n");
			scanf("%d",&n);
			printf("enter array elements\n");
			for(i=0;i<n;i++)
			{
				scanf("%d\n",a[i]);
			}
			printf("enter the key to be searched\n");
			scanf("%d",&k);
			start=clock();
			int flag=linear(a,0,n-1,k);
			end=clock();
			time_req=((double)(end-start))/CLOCKS_PER_SEC;
			if(flag!=-1)
			{
				printf("\nelment %d found",k);
				printf("the time required is %f",time_req);
			}
			else
			{
				printf("element not found");
			}
			break;

		case 2: printf("enter the size of array\n");
		scanf("%d",&n);
		printf("enter the array elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%d\n",&a[i]);
		}
		printf("enter the key to be searched\n");
		scanf("%d",&k);
		start=clock();
		int flag=bin(a,0,n-1,k);
		end=clock();
		time_req=((double)(end-start))/CLOCKS_PER_SEC;
		if(flag==-1)
		printf("elemnet not found\n");
		else
		{
			printf("element found\n");
			printf("time required to search is %f",time_req);
		}
		break;

	default:printf("invalid choice\n");
	}
	return 0;
}


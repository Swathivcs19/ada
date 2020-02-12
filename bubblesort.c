#include<stdio.h>
#include<time.h>
void main()
{
 int i,j,n,arr[20],temp;
 clock_t t1,t2;
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n-1;i++)
 {
 	scanf("%d",&arr[i]);
 }
 t1=clock();
 for(i=0;i<n;i++)
 	{
 		for(j=0;j<n-i;j++)
 		{
 			if(arr[j]>arr[j+1])
 			{
 				temp=arr[j];
 				arr[j]=arr[j+1];
 				arr[j+1]=temp;
 			}
 		}
 	}
 t2=clock();
 printf("sorted array is\n");
 for(i=0;i<n;i++)
 {
 	printf("%d\n",arr[i]);
 }
 printf("the time required is %ld ticks %ld seconds",
 	(t2-t1),(t2-t1)/CLOCKS_PER_SEC);
}
 

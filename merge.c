#include<stdio.h>
#include<time.h>
void merge(int low,int mid,int high, int a[])
{
    int i,j,k,c[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
        else
        {
            c[k]=a[j];
            k=k+1;
            j=j+1;
        }
    }
        while(i<=mid)
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
        while(j<=high)
        {
            c[k]=a[j];
            k=k+1;
            j=j+1;
         }
         for(k=0;k<high;k++)
         {
         a[k]=c[k];
         }
}

void merge_sort(int low,int high, int a[])
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
     
     merge_sort(low,mid,a);
     merge_sort(mid+1,high,a);
     merge(low,mid,high,a);
     }
}
void main()
{
    int a[20],n,i;
    clock_t t1,t2;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t1=clock();
    merge_sort(0,n-1,a);
    t2=clock();
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("time taken by this program is %d seconds %ld ticks",(t2-t1),(t2-t1)/CLOCKS_PER_SEC);
}
    

****************************************************************************************
Given an sorted array arr[] of N integers and a number K is given. The task is to check if the element K is present in the array or not.
Input:
First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and the number K separated by space. Next line contains N elements.
Output:
For each testcase, if the element is present in the array print "1" (without quotes), else print "-1" (without quotes).
Example:
Input:
2
5 6
1 2 3 4 6
5 2
1 3 4 5 6
Output:
1
-1
Explanation:
Testcase 1: Since, 6 is present in the array at index 4 (0-based indexing), so output is 1.
Testcase 2: Since, 2 is not present in the array, so output is -1.
***************************************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,l,k,i,j;
    int arr[20],out[20];
    printf("\nEnter The Number Of Testcases : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Size & The Key Element To Be Searched in The Array %d\n",(i+1));
        scanf("%d%d",&l,&k);
        printf("Enter The Elements : ");
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0;j<l;j++)
        {
            if(arr[j] == k)
            {
                out[i]=1;
                break;
            }
        }
        if(j==l)
            out[i]=-1;
    }
    printf("\n\tThe Result is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",out[i]);
    }
    return 0;    
}

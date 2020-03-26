************************************************************************************************************************************************************************************************************
    Write a program for the following: Given an array arr[] of size N. The task is to find the sum of the digits of all array elements which contains even number of 1’s in it’s their binary representation
***************************************************************************************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int Count(int n)
{
    int c = 0;
    while(n)
    {
        n = n & (n-1);
        c++;
    }
    if(c % 2 == 0)
        return 1;
    else
        return 0;
}

int Digit_Sum(int n)
{
    int s = 0;
    while(n != 0)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

int main()
{
    int A[10000],i;
    int n,sum = 0;
    printf("\nEnter The Size Of The Array : ");
    scanf("%d",&n);
    printf("\nEnter %d Elements : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(Count(A[i]))
            sum += Digit_Sum(A[i]);
    }
    printf("\nThe Sum of All The Digits Which Contains Even Number Of 1's in their Binary Representation is : %d",sum);
    return 0;
}

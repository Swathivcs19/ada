*
    C Program To Implement Warshall’s Algorithm using Dynamic Programming.
*/

#include<stdio.h>
#include<stdlib.h>

void transitiveClosure(int A[10][10],int n)
{
    int path[n][n];     
    int i,j,k;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            path[i][j] = A[i][j];
        }
    }
    
    for(k=0;k<n;k++)        
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(path[i][j] != 1 && (path[i][k] && path[k][j]))
                    path[i][j] = 1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",path[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[10][10];
    int i,j;
    int n;
    printf("\nEnter The Number Of Vertices : ");
    scanf("%d",&n);
    printf("\nEnter The Graph Data in the form of Adacency Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    transitiveClosure(A,n);
    return 0;
}

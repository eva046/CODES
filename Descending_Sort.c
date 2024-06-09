#include<stdio.h>
int main()
{
    int n,min,i,temp,j;
    printf("Enter The Array Size - ");
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[j]>A[i])
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}


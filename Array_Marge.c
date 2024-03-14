// Merging Two arrays into One
#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    printf("Enter 1st Array Size = ");
    scanf("%d", & m);
    int A[m];
    printf("Enter 1st Array Elements = \n");
    for(i=0;i<m;i++)
    {
        scanf("%d", & A[i]);
    }
    printf("Enter 2nd Array Size = ");
    scanf("%d", & n);
    int B[n];
    printf("Enter 2nd Array Elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & B[i]);
    }
    int V[m+n];
    for(i=0;i<m;i++)
    {
        V[i]=A[i];
    }
    for(i=0;i<n;i++)
    {
        V[i+m]=B[i];
    }
    printf("Here is The Merged Array = \n");
    for(i=0;i<m+n;i++)
    {
        printf(" %d",V[i]);
    }
    printf("\n");
    return 0;
}

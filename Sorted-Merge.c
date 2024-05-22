#include<stdio.h>
//5-10 20 22 29 50
//6-11 21 71 75 90 100
int main()
{
    int m,n,i,j,k,r;
    printf("Enter 1st Array Size = ");
    scanf("%d", &m);
    int A[m];
    printf("Enter The Elements of 1st Array = \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",& A[i]);
    }
    printf("Enter 2nd Array Size = ");
    scanf("%d", &n);
    int B[n];
    printf("Enter The Elements of 1st Array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",& B[i]);
    }
    int C[m+n];
    i=-1,j=0,k=0;
    while((j<m) && (k<n))
    {
        if(A[j]<=B[k])
        {
            i++;
            C[i]=A[j];
            j++;
        }
        else
        {
            i++;
            C[i]=B[k];
            k++;
        }
    }
    if(j==m)
    {
        for(r=k;r<n;r++)
        {
            i++;
            C[i]=B[r];
        }
    }
    else
    {
        for(r=j;r<m;r++)
        {
            i++;
            C[i]=A[r];
        }
    }
    printf("Here is The Array = \n");
    for( i=0; i<m+n ;i++)
    {
        printf("%d ",C[i]);
    }
    printf("\n");
    return 0;
}

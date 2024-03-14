// Spliting Array into 2 parts based on even and oddmyk
#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    printf("Enter Array Size = ");
    scanf("%d", & n);
    int A[n],B[n],C[n];
    printf("Enter Array Elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & A[i]);
        if(A[i]%2==0)
        {
            B[j]=A[i];
            j++;
        }
        else
        {
            C[k]=A[i];
            k++;
        }
    }
    printf("The Array Of Odd - \n");
    for(i=0;i<k;i++)
    {
        printf(" %d", C[i]);
    }
    printf("\nThe Array Of Even - \n");
    for(i=0;i<j;i++)
    {
        printf(" %d", B[i]);
    }
    printf("\n");
    return 0;
}

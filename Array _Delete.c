//Array Delete
#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array = ");
    scanf("%d", & n);
    int A[n];
    printf("Enter The Elements of The Array = ");
    for (int i=0; i<n ;i++)
    {
        scanf("%d", & A[i]);
    }
    printf("\nHere's your Array = ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nThe position you want to delete = ");
    int p;
    scanf("%d", & p);
    printf("Enter The New Element = ");
    for(int i=p-1;i<n;i++)
    {
        A[i]=A[i+1];
    }
    printf("\nHere's your Updated Array = ");
    for (int i=0; i<n-1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nAnd The Size of New Array = %d \n", n-1);
    return 0;
}


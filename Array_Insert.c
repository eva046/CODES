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
    printf("\nThe position you want to insert = ");
    int p;
    scanf("%d", & p);
    printf("Enter The New Element = ");
    int v;
    scanf("%d",& v);
    for(int i=n;i>0;i--)
    {
        A[i+1]=A[i];
    }
    A[p-1]=v;
    printf("\nHere's your Updated Array = ");
    for (int i=0; i<n+1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nAnd The Size of New Array = %d \n", n+1);
    return 0;
}
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
    printf("\nThe position you want to insert = ");
    int p;
    scanf("%d", & p);
    printf("Enter The New Element = ");
    int v;
    scanf("%d",& v);
    for(int i=n;i>0;i--)
    {
        A[i+1]=A[i];
    }
    A[p-1]=v;
    printf("\nHere's your Updated Array = ");
    for (int i=0; i<n+1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nAnd The Size of New Array = %d \n", n+1);
    return 0;
}

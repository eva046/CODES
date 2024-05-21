//Array Insert Print And Update
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
    printf("\nThe position you want to update = ");
    int p;
    scanf("%d", & p);
    printf("Enter The New Element = ");
    int v;
    scanf("%d",& v);
    A[p-1]=v;
    printf("\nHere's your Updated Array = ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

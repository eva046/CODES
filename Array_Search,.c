// Searching Array
#include<stdio.h>
int main()
{
    int n,v,i,found=0;
    printf("Enter Array Size = ");
    scanf("%d", & n);
    int A[n];
    printf("Enter Elements Of Array =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & A[i]);
    }
    printf("Enter The Element You want to Find = ");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        if(A[i]== v)
        {
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("%d is NOT FOUND !!!\n",v);
    }
    else
    {
         printf("%d is FOUND !!!\n",v);
    }
    return 0;
}

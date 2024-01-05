#include<stdio.h>
int main()
{
    int n,fact,i,n1,r,sum;
    scanf("%d",&n);
    n1=n;
    sum=0;
    fact=1;
    while(n1!=0)
    {
        r=n1%10;
        i=r;
        fact=1;
        while(i>0)
        {
            fact*=i;
            i--;
        }
        sum+=fact;
        n1/=10;
    }
    if(sum==n)
    {
        printf("%d is an Strong Number\n",n);
    }
    else
    {
        printf("%d is not an Strong Number\n",n);
    }
    return 0;
}

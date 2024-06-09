#include<stdio.h>
long long int fibonacci(long long int n)
{
    int v[n+1],i;
    v[0]=0;
    v[1]=1;
    for(i=2;i<=n;i++)
    {
        v[i]=v[i-1]+v[i-2];
    }
    return v[n];
}
int main()
{
    long long int n;
    printf("Enter The Position Of Fibonacci You Want - ");
    scanf("%lld",&n);
    printf("The Fibonacci(%lld) is - %lld\n",n,fibonacci(n));
}

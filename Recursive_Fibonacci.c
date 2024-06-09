#include<stdio.h>
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
    int n;
    printf("Enter Any Positive Number - ");
    scanf("%d",&n);
    printf("Here Is your Fibonacci Series - \n");
    for(int i=0;i<n;i++)
        {
            printf(" %d  ",fib(i));
        }
        printf("\n");
}


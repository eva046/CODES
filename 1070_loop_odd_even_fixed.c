#include<stdio.h>
int main()
{
    int a,i,v;
    scanf("%d", & a);
    if(a%2==0)
    {
    i=1;
    v=a+1;
    while(i<=6)
    {
        printf("%d\n",v);
        v+=2;
        i++;
    }

    }
    else
    {
        i=1;
        v=a;
    while(i<=6)
    {
        printf("%d\n",v);
        v+=2;
        i++;
    }
    }
    return 0;
}

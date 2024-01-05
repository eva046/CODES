#include<stdio.h>
int main()
{
    int m,n,i,sum,v,sum1=0,c=0;
    i=1;
    while(1)
    {
        scanf("%d %d", & m, & n);
        if((m==0) || (n==0))
            break;
            if((m<0) || (n<0))
                break;
        if(m>n)
        {
            i=1;
            v=n;
            while(v<=m)
            {
                sum1=sum1+v;
                printf("%d ",v);
                v++;
                i++;
            }
            sum=sum1-c;
            printf("Sum=%d\n",sum);
            sum1=c;

        }
        else if(n>m)
        {
            i=1;
            v=m;
            while(v<=n)
            {
                sum1=sum1+v;
                printf("%d ",v);
                v++;
                i++;
            }
            sum=sum1-c;
            printf("Sum=%d\n",sum);
            sum1=c;

        }
        else if(m==n)
        {
            printf("%d ",m);
            printf("Sum=%d\n",m);
        }


        i++;

    }

    return 0;;
}

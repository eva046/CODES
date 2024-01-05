#include<stdio.h>

int main()
{
    int a,i,c=0,a1=0,a2=0 ;
    i=1;
    while(i<=3)
    {
        scanf("%d", & a);
        if(c>a)
        {
            a1=c;
            if(a2>a1)
            {
                if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
            else if(a1>a2)
            {
                if(i==3)
                {
                    printf("%d\n",a1);
                }
            }
            else
            {
               if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
        }
        else if (a>c)
        {
            a2=a;

            if(a2>a1)
            {
                if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
            else if(a1>a2)
            {
                if(i==3)
                {
                    printf("%d\n",a1);
                }
            }
            else
            {
               if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
        }
        else
        {

            if(a2>a1)
            {
                if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
            else if(a1>a2)
            {
                if(i==3)
                {
                    printf("%d\n",a1);
                }
            }
            else
            {
               if(i==3)
                {
                    printf("%d\n",a2);
                }
            }
        }
        c=a;
        i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    float a,v,sum=0;
    int i=1,count=0;
    while(i<=6)
    {
        scanf("%f", & a);
        if(a>0)
        {
            count=count+1;
            sum=sum+a;
        }
        else if(a<0)
        {
            count=count+0;
        }
        i++;

    }
    v=(sum/count);
    printf("%d valores positivos\n",count);
    printf("%0.1f\n",v);
    return 0;
}

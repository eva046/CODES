/*Enter a range and print prime numbers between them*/
#include<stdio.h>
int main()
{
    int i,m,n,j,v,a;
    scanf("%d %d", &m, &n);
    v=0;
        i=m;
        while(i<=n)
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                {
                    v+=j;
/*printf("i=%d\n",i);
printf("j=%d\n",j);
printf("v=%d\n",v);*/
                }
                j++;//for testing which numbers can divide our fixed nuber i
            }
/*printf("i=%d\n",i);
printf("v=%d\n",v);*/
            if(v==i+1)
            {// it's a real prime number like 3 then v=3+1 cuz 3's
                 printf("%d\n",i);
                   // printf("j=%d\n",j);
            }
/*printf("i=%d\n",i);
printf("v=%d\n",v);*/
            i++;
            v=0;//after checking 1 number v will set to zero before entering loop
        }

    return 0;
}

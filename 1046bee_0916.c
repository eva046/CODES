#include<stdio.h>
int main()
{
    int a,b,v1;
    scanf("%d %d", & a, & b);//a = start;b = end
    if((a==b) || (b==a))
    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }
    else if((a>12) && (a<24))
    {
        if((b>12) && (b<24))
        {
            if(a>b)
            {
                printf("O JOGO DUROU %d HORA(S)\n",(a-b));
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S)\n",(b-a));
            }
        }
        else if((b<12) && (b>=0))
        {
            v1=a-12;
            printf("O JOGO DUROU %d HORA(S)\n",((12-v1)+b));
        }
    }
    else if((a<12) && (a>=0))
    {
        if((b>12) && (b<24))
        {
            printf("O JOGO DUROU %d HORA(S)\n",(b-a));
        }
        else if((b<12) && (b>=0))
        {
            if(a>b)
            {
                printf("O JOGO DUROU %d HORA(S)\n",(a-b));
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S)\n",(b-a));
            }
        }
    }
    else
    {

        printf("ERROR!!!\n");

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int h1,m1,h2,m2, k,k1,k2,k3,k4,k5,k6,k7; /* can't do it by converitng all to min, cuz what if we count 00 which is 1 according to international time.
    so have to do it in original time subtraction*/
    scanf("%d %d %d %d", & h1, & m1, & h2,& m2);
    if((h1==h2) && (m1==m2))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(m2<m1)
    {

        if(h1>=h2)
        {
            k2=m2-m1+60;
            k4=24-1+h2-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", k4, k2);
        }
        else
        {
            k=m2-m1+60;
            k1=h2-(h1+1);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", k1, k);
        }
    }
    else if(m2>=m1)
    {
        if(h1>h2)
        {
            k3=m2-m1;
            k5=(h2+24)-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", k5, k3);
        }
        else
        {
            k6=m2-m1;
            k7=h2-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", k7, k6);
        }

    }
    return 0;
}

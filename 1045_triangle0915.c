#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", & A, & B, & C );
    if((A>=B) && (A>=C))
    {
        if(B>=C)
        {
            if((A >= B + C))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( (pow(A,2)) == pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if((pow(A,2)) > pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((pow(A,2)) < pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }

        }
        else if(C>=B)
        {
            if((A >= B + C))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( (pow(A,2)) == pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if((pow(A,2)) > pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((pow(A,2)) < pow(B,2) + pow(C,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }

        }
        if ((A==B) && (B==C))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(((A==B) && (A!=C)) || ((A==C) && (C!=B)) || ((C==B) && (B!=A)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if((B>A) && (B>C))
    {
        if(A>=C)
        {
            if((B >= A + C))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( pow(B,2) == pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if(pow(B,2) > pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(pow(B,2) < pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else
        {
            if((B >= A + C))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( pow(B,2) == pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if(pow(B,2) > pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(pow(B,2) < pow(A,2) + pow(C,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
                if ((A==B) && (B==C))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(((A==B) && (A!=C)) || ((A==C) && (C!=B)) || ((C==B) && (B!=A)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else
    {
        if(B>=A)
        {

            if((C >= B + A))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( pow(C,2) == pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if(pow(C,2) > pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(pow(C,2) < pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else
        {
            if((C >= B + A))
            {
                printf("NAO FORMA TRIANGULO\n");
            }
            else if( pow(C,2) == pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if(pow(C,2) > pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(pow(C,2) < pow(B,2) + pow(A,2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        if ((A==B) && (B==C))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(((A==B) && (A!=C)) || ((A==C) && (C!=B)) || ((C==B) && (B!=A)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }


    }
    return 0;

}

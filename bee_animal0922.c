#include<stdio.h>
#include<string.h>

int main()
{
    char i[11],j[11],k[11] ;
    scanf("%s", & i);
    scanf("%s", & j);
    scanf("%s", & k);
    char i1[11]="vertebrado", i2[11]="invertebrado";
    char j1[11]="ave", j2[11]="mamifero", j3[11]="inseto" ,j4[11]="anelideo";
    char k1[11]="carnivoro" , k2[11]="onivoro" , k3[11]="herbivoro" , k4[11]="hematofago";
    if(strcmp(i,i1)==0)
    {
        if(strcmp(j,j1)==0)
        {
            if(strcmp(k,k1)==0)
            {

                printf("aguia\n");
            }
            else if(strcmp(k,k2)==0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(j,j2)==0)
        {
            if(strcmp(k,k2)==0)
            {

                printf("homem\n");
            }
            else if(strcmp(k,k3)==0)
            {

                printf("vaca\n");
            }
        }
    }
    else
    {
        if(strcmp(j,j3)==0)
        {
            if (strcmp(k,k4)==0)
            {

                printf("pulga\n");
            }
            else if(strcmp(k,k3)==0)
            {

                printf("lagarta\n");
            }

        }
        else if(strcmp(j,j4)==0)
        {
            if(strcmp(k,k4)==0)
            {

                printf("sanguessuga\n");
            }
            else if(strcmp(k,k2)==0)
            {

                printf("minhoca\n");
            }
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int ed, sd, h, m, s, s1, s2, m1, m2, h1, h2, fd,i;
    char st1[7], st2[7];

    scanf("%s %d", & st1 , & sd);
    scanf("%d :  %d : %d", & h, & m, & s);

    scanf("%s %d", & st2 , & ed);
    scanf("%d : %d : %d", & h1, & m1, & s1);
    if(((ed<=31) && (sd>0) ) && ((ed>=sd)))
    {

        if(ed==sd)
        {
            if(s1>=s)
            {
                s2=s1-s;
                if(m1>=m)
                {
                    m2=m1-m;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }
                else
                {
                    m2=m1+60-m;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1+24-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }

                }
            }
            else
            {
                s2=s1+60-s;
                if(m1>m)
                {
                    m2=m1-m-1;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }

                else
                {
                    m2=m1+60-m-1;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1+24-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }

                }
            }
        }
        else if (ed>sd)
        {
            if(s1>=s)
            {
                s2=s1-s;
                if(m1>=m)
                {
                    m2=m1-m;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else
                    {
                        h2=h1+24-h;
                        fd=ed-sd-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }
                else
                {
                    m2=m1+60-m;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd-1;
                        h2=h1+24-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else
                    {
                        h2=h1+24-h-1;
                        fd=ed-sd-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }
            }
            else
            {
                s2=s1+60-s;
                if(m1>m)
                {
                    m2=m1-m-1;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd;
                        h2=h1-h;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else
                    {
                        h2=h1+24-h;
                        fd=ed-sd-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }
                else
                {
                    m2=m1+60-m-1;
                    if(h1>h)
                    {
                        fd=ed-sd;
                        h2=h1-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else if (h1==h)
                    {
                        fd=ed-sd-1;
                        h2=h1+24-h-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                    else
                    {
                        h2=h1+24-h-1;
                        fd=ed-sd-1;
                        printf("%d dia(s)\n", fd);
                        printf("%d hora(s)\n", h2);
                        printf("%d minuto(s)\n", m2);
                        printf("%d segundo(s)\n", s2);
                    }
                }
            }
        }

        else
        {
            printf("0 dia(s)\n");
            printf("0 hora(s)\n");
            printf("0 minuto(s)\n");
            printf("0 segundo(s)\n");
        }
    }

    else

    {
        printf("0 dia(s)\n");
        printf("0 hora(s)\n");
        printf("0 minuto(s)\n");
        printf("0 segundo(s)\n");
    }
    return 0;
}


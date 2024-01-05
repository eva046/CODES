/*keep reading 2 number until you get valid 2 and print the avg again
ask if you want to go on press 1 for going on and 2 for stop.
if you press 1 thn it will keep reading 2 number until you get valid 2
    and printf the avg. Everytime you press 1 program will continue*/
#include<stdio.h>
int main()
{
    float a,v=0,i,c;
    int x;
    double avg;
    i=1;// (i) to count the valid numbers
    while(1)
    {// to keep reading
        scanf("%f", & a);
        if((a<0) || (a>10))
        {
            printf("nota invalida\n");
        }
        else if((a>=0) && (a<=10))
        {
            v+=a;
            if(i==2)
            {
                avg=(double)v/2;
                printf("media = %0.2lf\n",avg);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {//again loop to ask and go on if you press 1
                    scanf("%d", &x);
                    if(x==2)
                    {
                       return 0;
                    }//I used if and else if otherwise it will keep reading & checking if i used if and if
                    else if(x==1)
                    {
                        v=0;
                        avg=0;
                        i=1;//again to count 2 valid value
                        while(1)
                        {
                            scanf("%f", & c);
                            if((c<0) || (c>10))
                            {
                                printf("nota invalida\n");
                            }
                            else if((c>=0) && (c<=10))
                            {
                                v+=c;
                                if(i==2)
                                {
                                    avg=(double)v/2;
                                    printf("media = %0.2lf\n",avg);
                                    printf("novo calculo (1-sim 2-nao)\n");
                                    break;
                                }//break if you get a result after pressing 1 then get out of this loop to get again input x for 1 and 2
                                i++;
                            }
                        }
                    }
                    else
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }

                }

            }
            i++;// to count the valid number
        }


       }

}


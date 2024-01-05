#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=1;
    double f,b1,b2,b3,count=0,count1=0,count2=0,v;
    scanf("%d", & n);
    char t[7], fro[7]="S" , rat[7]="R" , rab[7]="C";
    while(i<=n)
    {
        scanf("%lf %s",&f,&t);
        if(strcmp(fro,t)==0)
        {
            count+=f;
        }
        else if(strcmp(rat,t)==0)
        {
            count1+=f;
        }
        else if(strcmp(rab,t)==0)
        {
            count2+=f;
        }
        i++;
    }
    v=(count+count1+count2);
    printf("Total: %0.0lf cobaias\n",v);
    printf("Total de coelhos: %0.0lf\n",(count2));
    printf("Total de ratos: %0.0lf\n",(count1));
    printf("Total de sapos: %0.0lf\n",(count));
    b1=(count2*100)/v;
    b2=(count2*100)/v;
    b3=(count*100)/v;
    printf("Percentual de coelhos: %0.2lf %%\n",b1);
    printf("Percentual de ratos: %0.2lf %%\n",b2);
    printf("Percentual de sapos: %0.2lf %%\n",b3);
    return 0;

}

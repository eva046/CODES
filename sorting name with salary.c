/*salary without taxes----
#include<stdio.h>
int main()
{
    double p_s,f_s,t;
    printf("Enter Your Salary : ");
    scanf("%lf",&p_s);
    if(p_s<25000)
    {
        f_s = p_s;
    }
    else if((25000<=p_s) && (p_s<40000))
    {
        t = p_s * 0.25;
        f_s = p_s-t;
    }
    else if((40000<=p_s) && (p_s<60000))
    {
        t = p_s * 0.50;
        f_s = p_s-t;
    }
    else
    {
        t = p_s * 0.70;
        f_s = p_s-t;
    }
    printf("Salary Without Taxes : %.0lf\n",f_s);
}*/
/*sorting------ name with salary based on maximum salary*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char name[3][27],temp1[27];
    double salary[3];
    for(i=0;i<3;i++)
    {
        scanf("%s %lf", & name[i], & salary[i]);
    }
    /*for(i=0;i<3;i++)
    {
        printf("%s %0.2lf\n", name[i], salary[i]);
    }*/
    for (i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(salary[i] < salary[j])
            {
                temp=salary[j];
               salary [j]= salary [i];
               salary[i]=temp;
                strcpy(temp1, name[j]);
                strcpy(name[j], name[i]);
                strcpy(name[i], temp1);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%s %0.2lf\n", name[i], salary[i]);
    }
}

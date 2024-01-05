/*Read Two valid value and print the avg
keep reading until you get two valid value*/
#include<stdio.h>
int main()
{
    float x,i,b=0;
    double avg;
    i=1;//initialization can be used too in infinite loop too to count loop number
    while(1)
    {
        scanf("%f", &x);
        if((x<0) || (x>10))
        {
        printf("nota invalida\n");
        }
        else if((x>=0) && (x<=10))
        {
        b+=x;
    /*i will be counted two if there are two valid value cuz i used it under condition
    and it meaning i got 2 valid value*/
        if(i==2)
        {
            avg=b/2;
            printf("media = %0.2lf\n",avg);
            break;

        }
        i++;/*outside the if cuz my condition is i==2 so 1st it have to be 2
        to fall inside the condition if I get any valid value.And inside of else if
        cuz it will be counted inside if i get valid value under the else if condition*/
        }
}

return 0;
}


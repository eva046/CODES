/*Converting one datatype into another is known as type casting
 or, type-conversion. Here we took input as int but to get the pure div
 ans we converted one input into double using cast operator to get double div
 so see the output you will see -3/2 will give you-1.5. if you didn't use
 casting then you would have -1.0 ans. The digits after the point will be
 shown as 0 to you. Cuz int/int=int & != double but double/int=double*/
#include<stdio.h>
int main()
{
    int i,n,x,y;//told to take 2 input as integer
    double div;//but ans can be in double type
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        scanf("%d %d", &x , &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {//[(type_name)expression]=casting
            div=(double)x/y;//Converting int to double using cast
            printf("%0.1lf\n",div);
        }
        i++;
    }
    return 0;
}

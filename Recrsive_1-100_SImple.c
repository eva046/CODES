/*#include<stdio.h>
int n=1;
void num(int n)
{
    if(n<=100)
    {
        printf("%d \n",n);
        n++;
        num(n);
    }
}
int main()
{
   num(n);
}*/
#include<stdio.h>
int n=1;
void odd(int n)
{
    if(n<=100)
    {
        printf("%d \n",n);
        n++;
       even(n);
    }
}
void even(int n)
{
    if(n<=100)
    {
        printf("%d \n",n);
        n++;
       odd(n);
    }

}
int main()
{
   odd(n);
}


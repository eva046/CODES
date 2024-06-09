#include<stdio.h>
int n=1;
void odd(int n)
{
    if(n<=100)
    {
        printf("%d \n",n+1);
        n++;
       even(n);
    }
}
void even(int n)
{
    if(n<=100)
    {
        printf("%d \n",n-1);
        n++;
       odd(n);
    }

}
int main()
{
   odd(n);
}

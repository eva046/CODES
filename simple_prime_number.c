/*A Prime Number is a number that is divisible only by 1 (one) and by itself.
For example the number 7 is Prime, because it can be divided only by 1 and by 7.*/
#include<stdio.h>
int main()
{
    int i,t,count=0,n,j;
    scanf("%d", & t);
    for(i=1;i<=t;i++)
    {//this loop indicates test cases
        scanf("%d",& n);
        count=0;//after taking input count will be fresh every time
        for(j=2;j<n;j++)
        {/*this loop will check how many numbers from 2 and to <n can divide n
            here we set the limit between 2 and <n cuz it's obvious that all numbers
            include prime numbers can be divided by 1 and itself. so here
            between them if any other number can divide n then loop will count
            and will broke cuz we don't need to divide more so when count>0 it's
            not a prime number cuz as prime number can't be divided by 1 and itself
            then count should be 0*/
            if(n%j==0)
            {
                count++;
                break;
            }//
        }
        if(count==0)
        {
            printf("%d eh primo\n",n);
        }
        else
        {
            printf("%d nao eh primo\n",n);
        }
    }
}

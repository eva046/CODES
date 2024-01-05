/*Read 100 integer numbers. Print the highest read value and the input position.*/
#include<stdio.h>
int main()
{
    int x,v=0,i,t;
    i=1;//for counting 100 times loop
    while(i<=100)
    {
        scanf("%d", & x);
        //for taking input 100 times
        if(x>=v)
        {/*if input is greater than or equal v then it will fall into this
        loop and will be saved to v cuz we have to print the biggest number
        for the 1st time v=0 so it will save the 1st input obviously
          in v then if next time the input is higher than v=the saved number
          then it will replace that number  */
            v=x;
            //if x is equal or bigger than the prev input x it will be saved to v
            t=i;
            //and the position of v it means the i when v is the biggest
        }
        else
        {//if it doesn't fall into previous loop then it v will be still v
            v=v;
        }
        i++;
    }
    printf("%d\n",v);//for printing the biggest number
    printf("%d\n",t);//for printing the position of biggest number
    return 0;
}

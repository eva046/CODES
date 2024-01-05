/*There are N=t people Theon may say the torturer is. Let us consider that the people are numbered from 1 to N.
If Theon answers the torturer is person i, Ramsay will hit him Ti times.helping Theon and determine what he should answer
in order to minimize the number of times he will be hit.*/
#include<stdio.h>
/*The first line contains an integer N (1 ≤ N ≤ 100). The second line contains N integers T1,T2,...,TN (0 ≤ Ti ≤ 20).
if N=t=3 then it means 3 integers like 8 0 3... making a program which will pick the position of smallest number*/
int main()
{
    int x,v=1,i,j=1,t,d=0,count=1;
    //v initially will be 1 and count to and j will be one too if there is not that much to print like 1 it will print 1
    scanf("%d", & t);
    i=1;//count N time.
    while(i<=t)
    {
        scanf("%d", & x);//have input N times
       if(t==1)
        {//if test case is 1 then there is nothing to compare and as i=1 then we will print 1
            v=x;
            j=i;
        }//so here we printing position i
        if(x==0)
        {/*as v=1 then if x=0 then it will increase to x+1 and after comparing with v=1 for 1st time
            x=0 will be saved to v... this condition is only for 0 cuz for others input v=1 will be counted
            naturally all other input bigger than 0 will be always bigger than x(x+1=0+1=1) so we don't need
            to increase the value of x differently*/
            if(x+1<=v)
            {
                v=x;
                j=i;
            }//position of i will be saved to j
            else
            {
                v=v;
                j=j;
            }//all the other time v will be v and j will be j nothing will be counted
        }//otherwise always v will be v and j will be j nothing changes it means cuz we only counting the small ones
        else
        {//if x is any integers other than 0 then it will follow under this condition
            if(x<v)
            {/*if x is smaller than v=1 then x will be saved to j to count for 1st time otherwise it
                will check if x new input is smaller than previous small input if it is new x will
                be saved to position v and it's position will be saved to j*/
                v=x;
                j=i;
            }
            if(x==v)
            {//if x is equal to v means if two or more constructive terms are same then it will fall under this
                v=x;
/*here x will be save to v and we created this special condition cuz we can't print updated i like if there is
3 ones (1 1 1) then position should be print 1 (the previous i) not 3 (the updated i)*/
                 if(count>=2)
                 {//we need this condition if more than two terms are far away from each other
                     j=d;
                 }
/*Look normally if there is more than 1 constructive term them this condition will be applied like
previous i (prev position ) will be saved and it will be deducted from the updated one so
for only this condition we are saving the previous v in d cuz we only need the prev d in this term!!!
THIS CONDITION IS IN THE ELSE CONDITION!!!
what if 1 is in 37 position which is the lowest in the series and it also appears in 87 position
then under else condition 37(prev i) will be saved to d and next i will be 87 cuz only next
1 is in 87 position so under that else condition j=87-37=50 but we need to print the updated version right?
SO HERE we want the IF CONDITION
here we are counting a number if smallest number which is 1 found then it will count will increase to 1
and will become 2 then next time if the same smallest number is appeared then obviously count will be 2
the more the it will appear this will be counted as 1 every time so we need to print the 1st saved one in
this case which was 37 that's why under IF CONDITION i put only j=d which will be printed*/
                else
                 {
                j=i-d;
                 }
                 d=i;
                 count++;
            }
            else
            {
                v=v;
                j=j;
            }//all the other time v will be v and j will be j nothing will be counted
        }
        i++;
    }
  //  printf("%d\n",v); for printing the actual smallest number
    printf("%d\n",j);//for printing the position
    return 0;
}

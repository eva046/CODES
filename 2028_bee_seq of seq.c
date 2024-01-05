/*read a number N,make a sequence like 0 1 2 2 3 3 3 4 4 4 …N N N … N...addition
print the number of printed digits(number) before then print the sequence.*/
#include<stdio.h>
int main()
{
    int i,x,j=0,k=0,d;
    int t,v;
    //took d=0 which will increase to 1 everytime loop continues
    /*t=t(1)+d(0) for 1st time
      t=t(1)+d(1) for 2nd time
      t=t(2)+d(2) for 2nd time
      t=(4)+d(3) for 2nd time
      t=(7)+d(4) for 2nd time
       see we are taking different sequences pattern just for printing digits number
       ecverytime... */
    i=1;
    while((scanf("%d",&x))!=EOF)//loop 1 will take input each time
    {
        //it will end when you will pres ctrl z to indicate EOF
        v=((x*(x+1)));
        t=(v/2)+1;
        //it' said to print numbero when it's 1 number when 0 is inputted
        if(x==0)
        {
        printf("Caso %d: %d numero\n",i,t);
        //got formula for 1 1 4 7 11 16 series and it's xn=((x*(x-1))/2)+1
        /*here we adjusted the formula to plus one cuz normally
        formula counts n=1 start bt we need to count it from n=0*/
        printf("0");
        }
        else {
        printf("Caso %d: %d numeros\n",i,t);
        //got formula for 1 1 4 7 11 16 series and it's xn=((x*(x-1))/2)+1
        /*here we adjusted the formula to plus one cuz normally
        formula counts n=1 start bt we need to count it from n=0*/
        printf("0");
        //printing 0 beforehand once beginning of the sequence
        }
        j=1;
        while(j<=x)//loop 2 will increase number like 0 1 2 3
        {
            //this loop will increase numbers to 1 untill x
            k=1;
            while(k<=j)//loop 3 will print 1(1) 2(2 2) 3(3 3 3 3)
            {
                //this loop will print x number each j times
                printf(" %d",j);
                k++;//will print number multiply times counting times
                /*loop 3 will repeat a fixed number meaing in 1 loop after taking x=3 input loop 2
                will go on till it prints 3(j<=x) and every time loop continues numbers will increase to 1
                liek 1 2 3 etc. and then loop 3 will start when j=1 then loop 3(k<=j) will continue 1 time
                and will print 1 then it will break and j will increase to 1 becomes j=2 then it will enter
                loop 3 then loop 3 will print(k<=j) 2 2 counting 2(k1 time) 2(k2 time) like this also when
                j=3 in loop 3 j=3 will be printed 3 times and it all loop will be break*/
            }
            j++;
            //will print number gradually increasing 1 everytime
        }
        d++;//for just counting numbers
        i++;//counting case numbers=taking input cases
        printf("\n");
        printf("\n");


    }
    return 0;

}

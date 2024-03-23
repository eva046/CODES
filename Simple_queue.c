#include<stdio.h>
int main()
{
    int rear=-1,front=-1,count=0,i,n,j;
    char v;
    printf("Enter Queue Size = ");
    scanf("%d", &n);
    char A[n];
    while(1)
    {
        printf("\n---Press 1 To Enqueue---\n");
        printf("\n---Press 2 To Dequeue---\n");
        printf("\n---Press 3 To Stop & Display---\n");
        scanf("%d", & i);
        if(i==3)
        {
            printf("\nFinal Outcome Of Queue=\n");
            for(j=0; j<n; j++)
            {
                printf(" %c ",A[j]);
            }
            printf("\n Rear= %d\n",rear);
            printf("\n Front= %d\n",front);
            break;
        }
        else if(i==1)
        {
            printf("\n Value To Enqueue = ");
            getchar();
            scanf("%c",& v);
            if(rear == n-1)
            {
                printf("\n OVERFLOW!!!\n");
            }
            else
            {
                if(rear==-1)
                {
                    rear=0;
                    front=0;
                    A[rear]=v;
                }
                else
                {
                    rear++;
                    A[rear]=v;
                }
                printf("\n Enqueued Successfully !!!\n");
            }
        }
        else
        {
            if(front== -1)
            {
                printf("\n UNDERFLOW!!!\n");
            }
            else
            {
                A[front]= 48;
                //48 ascii value of zero
                if(front==n-1)
                {
                    front=n-1;
                }
                else
                {
                    front++;
                }
                printf("\n Dequeued Successfully !!!\n");
            }
        }
    }

}


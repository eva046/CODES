//simple Queue = FIFO (first in first out)
#include<stdio.h>
int rear=-1,key,n,front=-1;
void ENQUEUE(int A[n])
{
    printf("Enter The Number - ");
    scanf("%d", &key);
    if (rear==n-1)
    {
        printf("rear = %d   front = %d\n",rear, front);
        printf("Queue Is Overflowed!!!\n");
    }
    else if (rear==-1)
    {
        rear++;
        front++;
        A[rear]=key;
        printf("rear = %d   front = %d\n\n",rear, front);
        printf("Entered Successfully!!!\n");
    }
    else
    {
        rear++;
        A[rear]=key;
        printf("rear = %d   front = %d\n",rear,front);
        printf("Entered Successfully!!!\n");
    }
    printf("\n");
}
void DEQUEUE(int A[n])
{
    if (front==-1)
    {
        printf("rear = %d   front = %d\n",rear, front);
        printf("Queue Is Underflowed!!!\n");
    }
    else if(front==n)
    {
        printf("rear = %d   front = %d\n",rear, front);
        printf("Queue Is Underflowed!!!\n");
    }
    else
    {
        printf("rear = %d   front = %d\n",rear, front);
        A[front]=0;
        front++;
        printf("Deleted Successfully!!!\n");
    }
    printf("\n");
}
void view_queue(int A[n])
{
    for(int i=0; i<=rear; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\nrear = %d   front = %d\n",rear, front);
    printf("\n\n");
}
int main()
{
    int v;
    printf("Enter Queue Size = ");
    scanf("%d",&n);
    printf("\n");
    int A[n];
    while(1)
    {
        printf(" --- Choose The Operation --- \n");
        printf(" 1.Enter Number In Queue_ENQUEUE()\n");
        printf(" 2.Delete Number From Queue_DEQUEUE() \n");
        printf(" 3.View The QUEUE \n");
        printf(" 4.Exit \n");
        printf(" Enter Your Option - ");
        scanf("%d", &v);
        if(v==1)
        {
            ENQUEUE(A);
        }
        else if(v==2)
        {
            DEQUEUE(A);
        }
        else if(v==3)
        {
            view_queue(A);
        }
        else if(v==4)
        {
            printf("Existed Successfully !!!\n");
            return 0;
        }
        else
        {
            printf("Invalid Option!!!\Try Again!!!");
        }
    }
}

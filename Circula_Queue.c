//Circular Queue = FIFO (first in first out)
#include<stdio.h>
int rear=-1,key,n,front=-1,count=0;
void ENQUEUE(int A[n])
{
    printf("Enter The Number - ");
    scanf("%d", &key);
    if(count==n)
    {
        printf("rear = %d   front = %d\n",rear, front);
        printf("The Queue is Overflowed !!!\n");
    }
    else
    {
        if (rear==n-1)
        {

            rear=0;
            A[rear]=key;
            count++;
            printf("rear = %d   front = %d\n",rear, front);
        }
        else if (rear==-1)
        {
            rear=0;
            front=0;
            A[rear]=key;
            printf("rear = %d   front = %d\n\n",rear, front);
            printf("Entered Successfully!!!\n");
            count++;
        }
        else
        {
            rear++;
            A[rear]=key;
            printf("rear = %d   front = %d\n",rear,front);
            printf("Entered Successfully!!!\n");
            count++;
        }
    }
    printf("\n");

}
void DEQUEUE(int A[n])
{
    if(count==0)
    {
        front=-1;
        rear=-1;
        printf("rear = %d   front = %d\n",rear, front);
        printf("Queue Is Underflowed!!!\n");
    }
    else
    {
        A[front]=NULL;
        count--;
        if(count==0)
        {
            front=-1;
            rear=-1;
            printf("rear = %d   front = %d\n",rear,front);
            printf("Deleted Successfully!!!\n");
        }
        else
        {
            if(front==n-1)
            {
                front=0;
                printf("rear = %d   front = %d\n",rear,front);
            printf("Deleted Successfully!!!\n");
            }
            else
            {
                front++;
                printf("rear = %d   front = %d\n",rear,front);
            printf("Deleted Successfully!!!\n");
            }
        }
    }
    printf("\n");
}
void view_queue(int A[n])
{
    for(int i=0; i<n; i++)
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

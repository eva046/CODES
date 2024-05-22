//Stack = LIFO = Last In First Out
#include<stdio.h>
int top=-1,key,n;
void push(int A[n])
{
    printf("Enter The Number - ");
    scanf("%d", &key);
    if (top==n-1)
    {
        printf("Stack Is Overflowed!!!\n");
    }
    else
    {
        top++;
        A[top]=key;
        printf("Entered Successfully!!!\n");
    }
     printf("\n");
}
void pop(int A[n])
{
 if (top==-1)
    {
        printf("Stack Is Underflowed!!!\n");
    }
    else
    {
        A[top]=NULL;
        top--;
        printf("Deleted Successfully!!!\n");
    }
     printf("\n");
}
void view_stack(int A[n])
{
    for(int i=0;i<=top;i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n\n");
}
int main()
{
    int v;
    printf("Enter Stack Size = ");
    scanf("%d",&n);
     printf("\n");
    int A[n];
    while(1)
    {
        printf(" --- Choose The Operation --- \n");
        printf(" 1.Enter Number In Stack_PUSH()\n");
        printf(" 2.Delete Number From Stack_POP() \n");
        printf(" 3.View The Stack \n");
        printf(" 4.Exit \n");
        printf(" Enter Your Option - ");
        scanf("%d", &v);
        if(v==1)
        {
            push(A);
        }
        else if(v==2)
        {
            pop(A);
        }
        else if(v==3)
        {
            view_stack(A);
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

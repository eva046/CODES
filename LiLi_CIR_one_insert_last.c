#include<stdio.h>
#include<stdlib.h>
int v,i,position,insert;
struct list
{
    int data;
    struct list *next;
};
typedef struct list *node;
node ptr,h1,h2,p,q,temp;

int main()
{
    h1=0,h2=0,p=0;
    while(1)
    {
        scanf("%d",& v);
        if(v==0)
        {
            break;
        }
        p=(node)malloc(sizeof(node));
        if(h1==0)
        {
            p->data=v;
            p->next=NULL;
            h1=p;
            q=p;
        }
        else
        {
             p->data=v;
            p->next=NULL;
           q->next=p;
            q=p;
        }
    }
    ptr=h1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=h1;
printf("Value = ");
scanf("%d", &insert);
temp=h1;
    while(temp->next!=h1)
    {
        temp=temp->next;
    }
ptr=(node)malloc(sizeof(node));
ptr->data=insert;
ptr->next=h1;
//printf("%d ",ptr->data);
temp->next=ptr;
temp=h1;
    while(1)
    {
        printf("%d ", temp->data);
        temp=temp->next;
        if(temp==h1)
        {
            break;
        }
    }
}

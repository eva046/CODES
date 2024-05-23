#include<stdio.h>
#include<stdlib.h>
int v,key,found;
struct list
{
    int data;
    struct list *next;
};
typedef struct list *node;
node ptr,h,p,q;

int main()
{
    h=0,p=0;
    while(1)
    {
        scanf("%d",& v);
        if(v==0)
        {
            break;
        }
        p=(node)malloc(sizeof(node));
        if(h==0)
        {
            p->data=v;
            p->next=NULL;
            h=p;
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
    scanf("%d",&key);
    ptr=h;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            found=1;
            break;
        }
        ptr=ptr->next;
    }
    if (found==1)
    {
        printf("found\n");
    }
    else
    {
        printf("Not found\n");
    }
}

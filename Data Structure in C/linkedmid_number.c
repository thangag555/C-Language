#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*newnode,*temp,*Null;
int main()
{
    int i,n,r,x;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    r=round(n/2);
    for(i=0;i<r;i++)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
}

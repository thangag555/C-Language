#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
}*newnode,*head,*temp;
int main()
{
    int n,Null,i,count=0;
    printf("enter the size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=Null;
        if(head==Null)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    while(head!=Null)
    {
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d",count);
}

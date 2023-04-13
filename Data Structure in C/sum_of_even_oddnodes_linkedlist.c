#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int n;
    printf("Enter the size :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
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
    int a,even=0;
    int odd=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            a=temp->data;
            even+=a;
        }
        else
        {
            a=temp->data;
            odd+=a;
        }
        temp=temp->next;
    }
    printf("ODD:%d\n",odd);
    printf("EVEN:%d",even);
}

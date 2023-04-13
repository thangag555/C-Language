#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void count();
void insert_beginning();
void insert_end();
void insert_mid();


struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*null;
int main()
{
    int option;
    while(1)
    {
        printf("enter 1 to create\n");
        printf("enter 2 to count\n");
        printf("enter 3 to display\n");
        printf("enter 4 to insert beginning\n");
        printf("enter 5 to insert end\n");
        printf("enter 6 to insert middle\n");
        printf("enter 7 to exit\n");

        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;

        case 2:
            count();
            break;
        case 3:
            display();
            break;
        case 4:
            insert_beginning();
            break;
        case 5:
           insert_end();
            break;
        case 6:

             insert_mid();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("invalid");
            break;
        }
    }
}



void create()
{
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
}

void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}

void count()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("%d",count);
}

void insert_beginning()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insert_mid()
{
    int pos,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    printf("enter the position:");
    scanf("%d",&pos);
    temp=head;
    for(j=1;j<pos;j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
















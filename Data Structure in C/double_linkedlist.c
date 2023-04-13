#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertatbegain();
void insertatend();
void insertatmid();
struct node
{
    int data;
    struct node*next;
    struct node*privous;
}*head,*temp,*newnode,*tail;

int main()
{
    int choice=1;
    int option;
    while(choice==1)
    {
        printf("\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert at begin\n");
        printf("4.Insert at end\n");
        printf("5.Insert At Middle\n");
        printf("6.Exist");
        printf("Enter the choice (1,2,3,4,5,6) :");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertatbegain();
            break;
        case 4:
            insertatend();
            break;
        case 5:
            insertatmid();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter the correct choice :");
            break;
        }
    }
    return 0;
}
void create()
{
    int n,i;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf(" %d",&newnode->data);
        newnode->next=NULL;
        newnode->privous=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->privous=temp;
            temp=temp->next;
        }
    }
}
void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("The data is %d \n",temp->data);

        temp=temp->next;

    }
}
void insertatbegain()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the  new data: ");
    scanf(" %d",&newnode->data);
    newnode->next=NULL;
    newnode->privous=NULL;

    newnode->next=head;
    head=newnode;


}
void insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf(" %d",&newnode->data);
    newnode->next=NULL;
    newnode->privous=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void insertatmid()
{

    int pos,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf(" %d",&newnode->data);
    newnode->next=NULL;
    newnode->privous=NULL;
    printf("\n Enter the position:");
    scanf("%d",&pos);
    temp=head;
    tail=temp;
    for(j=1; j<pos; j++)
    {
        temp=temp->next;
    }
    tail=temp->next;
    tail->privous=temp;

    temp->next=newnode;
    newnode->privous=temp;
    newnode->next=tail;
    tail->privous=newnode;

}

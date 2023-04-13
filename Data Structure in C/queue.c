#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void peek();
void display();
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*newnode,*temp;

int main()
{
    int choice,option;
    while(1)
    {
        printf("\n 1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("enter the choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("enter the correct choice");
            break;

        }
    }
}
void enqueue()
{


    int choice=1;

    while(choice)
    {

        newnode=malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(front==NULL && rear==NULL)
        {
            front=rear=newnode;

        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
        printf("enter the choice(0,1)");
        scanf("%d",&choice);
    }
}
void dequeue()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Deleted Queue:%d",front->data);
        front=front->next;
        free(temp);
    }

}
void peek()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("peek element:%d",front->data);

    }

}
void display()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is not existed");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("The data is %d \n",temp->data);
            temp=temp->next;
        }
    }
}

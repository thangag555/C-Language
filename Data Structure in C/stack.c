#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();

struct node
{
    int data;
    struct node*next;
}*top=NULL,*newnode,*temp;


int main()
{

    int option;
    while(1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("enter the choice:");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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

void push()
{

    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("stack is deleted:%d",top->data);
    }
    top=top->next;
    free(temp);
}

void peek()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",top->data);
    }

}

void display()
{

    temp=top;
    while(temp!=NULL)
    {

        printf("the Stack is %d\n",top->data);
        top=top->next;
    }
}

#include<stdio.h>
#include<stdlib.h>

void display();
void push();
void pop();
void peek();

struct node
{
    int data;
    struct node*next;
}*top,*temp,*newnode;

int main()
{
    int top=-1;
    int option;
    while(1)
    {
        printf("\n 1.push \n");
        printf(" 2.pop \n");
        printf(" 3.peek \n");
        printf(" 4.display \n");
        printf("Enter the option :");
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
            printf("Enter the correct choice :");
            break;
        }

    }

}
void push()
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

        int Size=sizeof(arr);
        if(top==Size-1)
        {
            printf("Stack is overflow ")
        }
        else
        {
            scanf("%d",&element);
            top++;
            stack(top=element);
        }
    }



}
void pop()
{
    top=-1;
    element=stack(top);
    top--;
    if(top==NULL)

    }
void peek()
{
    temp=top;
    if(top==NULL)
    {
        printf("The Stack empty !!");
    }
    else
    {
        printf("The Hightest Stack is %d",top->data);
    }
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("The data is :%d\n",top->data);
        top=top->next;
    }
}

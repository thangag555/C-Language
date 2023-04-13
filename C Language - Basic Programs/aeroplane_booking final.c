#include<stdio.h>
#include<string.h>
int food();

struct passanger
{
    char name[100];
    int age;
    char gender[100];
}s[100];

int main()
{
    int m,i,ch,j=1,x,y,z,total;
    int a=1000;
    int b=500;
    int c=200;
while(j==1)
{
    printf("1.Enter the 1 for 1st class\n");
    printf("2.Enter the 2 for 2nd class\n");
    printf("3.Enter the 3 for 3rd class\n");
    printf("enter the choice:");
    scanf("%d",&ch);

    printf("how many seats\n");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("Enter the passanger detail %d\n",i);
        printf("Name:");
        scanf("%s",s[i].name);
        printf("Age:");
        scanf("%d",&s[i].age);
        printf("Gender:");
        scanf("%s",s[i].gender);
    }

    switch (ch)
    {
    case 1:

        x=a*m;
        total=x+food();
        printf("total price %d",total);
        break;
    case 2:
         y=b*m;
         total=y+food();
         printf("total price %d",total);
         break;
    case 3:
        z=c*m;
        total=z+food();
        printf("total price %d",total);
        break;
    default:
        printf("Please enter the correct choice\n");
        break;
    }
    printf("\nDo you want to continue 0/1:\n");
    scanf("%d",&j);
}

}

int food()

{

     int fd;
     return fd=1000;

}

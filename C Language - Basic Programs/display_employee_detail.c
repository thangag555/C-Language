#include <stdio.h>
int main()
{
   char name[50];
   int age;
   float salary;

   printf("Enter name: ");
   scanf("%s",&name);

   printf("Enter age: ");
   scanf("%d",&age);

   printf("Enter salary: ");
   scanf("%f",&salary);

   printf("\nyour name is: %s\n", name);
   printf("your age is: %d\n", age);
   printf("your salary is: %.2f\n", salary);

   return 0;
}

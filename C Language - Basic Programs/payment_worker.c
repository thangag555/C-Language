#include <stdio.h>
int main()
{
   int numWorkers, i;
   float rate, hours, totalPayment = 0.0;
   printf("Enter the number of workers: ");
   scanf("%d", &numWorkers);
   for (i = 1; i <= numWorkers; i++)
    {
      printf("\nEnter the hourly rate of worker %d: ", i);
      scanf("%f", &rate);
      printf("Enter the number of hours worked by worker %d: ", i);
      scanf("%f", &hours);
      totalPayment += rate * hours;
   }
   printf("\nTotal payment for all workers: $%.2f\n", totalPayment);
   return 0;
}

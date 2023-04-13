#include<stdio.h>
int main()
{
int i, n, first, second, median;
 printf("Enter the size of array : ");
 scanf("%d",&n);
int arr[n];
	 printf("Enter the elements in sorted array : ");
for(i=0;i<n;i++){ scanf("%d",&arr[i]); } printf("Entered elements are : "); for(i=0;i<n;i++)
 { printf("%d ", arr[i]);
 }
 {
first = arr[(n/2) - 1];
second = arr[n/2];
median = (first+second)/2; printf("\nThe median is : %d",median);
} 	 		 if(n%2 != 0)
{
median = arr[(n-1)/2];
printf("\nThe median is : %d",median);
}
 }


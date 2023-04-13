#include<stdio.h>
int main()
{
int i,j,n,m,a[10];
int high=a[0];
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>high)
{
    high=a[i];
}
}
printf("the peak is:%d",high);
}

#include<stdio.h>
int main()
{
int i,j,n,a[10];
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("the duplicate number is:%d",a[i]);
break;
}}}
}

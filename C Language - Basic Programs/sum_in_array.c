#include<stdio.h>
int main()
{
int i,j,n,m,a[10];
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("target\n");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==m)
{
printf("the pair found is:(%d,%d)",a[i],a[j]);
printf("\n");
}
else{
    printf("pair not found");
    break;
}
}
}
}

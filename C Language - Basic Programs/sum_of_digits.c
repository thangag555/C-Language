#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    scanf("%d",&num);
    while(num>0)
    {
          rem=num%10;
          sum=rem+sum;
          num=num/10;
    }
    printf("%d",sum);

}


#include <stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}

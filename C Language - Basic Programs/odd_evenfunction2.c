#include <stdio.h>
void odd(int a);

int main()
{
odd(10);
}



void odd(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            int c=1;
            c=i-c;
            printf("%d\n",c);
        }

    }

}

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	if(c >= a && d >= b)
	    {
	printf("POSSIBLE\n");
	    }
	else if(c < a || d < b)
	    {
	printf("IMPOSSIBLE\n");
	    }
	else
	    {
	printf("POSSIBLE\n");
	    }
	}
	return 0;
}



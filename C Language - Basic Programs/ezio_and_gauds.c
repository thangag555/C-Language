#include <stdio.h>

int main(void)
{
	int i,t,x,y;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d\t",&x);
	scanf("%d\n",&y);
	if(x>y)
	printf("YES\n");
	else if(y>x)
	printf("NO\n");
	else
	printf("YES\n");
	}
	return 0;
}



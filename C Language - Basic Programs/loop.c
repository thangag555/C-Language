#include <stdio.h>
int main(void)
{
    char str[20];
	int Lcount=0,Ocount=0,Pcount=0,i=0,a,d,c;
	scanf("%s", &str);
	if(str[0]=='l')
	{
		while(str[i]=='l')
		{
		Lcount++;
		i++;
		c=i;
		}
		while(str[c]=='o')
		{
		Ocount++;
		c++;
		a=c;
		}
		while(str[a]=='p')
		{
		Pcount++;
		a++;
		d=a;
		}
		if(Lcount==Pcount && (Pcount*2)==Ocount)
		printf("yes");
		else
		printf("no");
	}
	else{
		printf("no");
		}
	return 0;
}



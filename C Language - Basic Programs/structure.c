#include <stdio.h>

struct stu
{
int regno;
char name[20];
int dob;
int mobno;

};

void main()
{
struct stu s[5];
int i;
for(i=0;i<5;i++)
{
scanf("%d %s %d %d",&s[i].regno,&s[i].name,&s[i].dob,&s[i].mobno);
}
for(i=0;i<5;i++)
{
printf("%d %s %d %d ",s[i].regno,s[i].name,s[i].dob,s[i].mobno);
}
}

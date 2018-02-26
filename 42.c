#include<stdio.h>
#include<string.h>
int main() 
{
int a,b;
char c[50],d[50];
gets(c);
gets(d);
a=strlen(c);
b=strlen(d);
if(a>b)
{
	printf("%s",c);
}
else if(b>a)
{
	printf("%s",d);
}
else
{
	printf("%s",d);
}
	return 0;
}

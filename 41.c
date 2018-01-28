#include<stdio.h>
int main()
{
	int a,i;
	char str[30];
	scanf("%d",&a);
	scanf("%s",&str);
	for(i=1;i<=a;i++)
	{
		printf("%s",str);
	}
	return 0;
}

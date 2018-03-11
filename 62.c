#include <stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,n,count=0;
	printf("enter the string");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==0||s[i]==1)
		{
			count=count+1;
		}
		else if(count==n)
		{
			printf("yes");
			break;
		}
		else
		{
			printf("no");
			break;
			
		}
	}
	return 0;
}

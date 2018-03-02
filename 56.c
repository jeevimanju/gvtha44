#include <stdio.h>
#include<string.h>
int main() 
{
	char s[20];
	int n,i,f;
	gets(s);
            n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			f=1;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			f=2;
		}
		else
		{
			f=0;
		}

	}
	if(f==1 && f==2)
	{
		printf(" yes");
	}
	else
	{
		printf(" no");
	}

	return 0;
}

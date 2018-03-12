
#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c,flag=0;
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<=c;i++)
{
	if(c=i*i)
	{
		flag=1;
	}
}
if(flag==1)
{
	printf("perfect square");
}
else
{
	printf("not perfect square");
}
return 0;
}

    


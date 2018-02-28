#include<stdio.h>
#include<math.h>
int main()
{
int n=31,i,f=0;
for(i=0;i<n;i++)
{
if(pow(2,i)==n)
{
	printf("yes");
	f=1;
	break;
}
}
if(f==0)
printf("no");

	return 0;
}

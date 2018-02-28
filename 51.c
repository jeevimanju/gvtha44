#include<stdio.h>
#include<math.h>
int main()
{
int n,r,sum=0,res;
scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	sum=(sum*10)+r;
	n=n/10;
}
while(sum!=0)
{
	res=sum%10;
	printf("\n %d",res);
	sum=sum/10;
}
	return 0;
}

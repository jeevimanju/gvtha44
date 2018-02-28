#include <stdio.h>

int main()
{
int i,n,sum=0,a[n],avg;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
avg=sum/n;
printf("%d",avg);
	return 0;
}

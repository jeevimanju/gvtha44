#include<stdio.h>
int main()
{
int a[10],i,j,temp,max;
for(i=0;i<9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<9;i++)
{
for(j=i+1;j<i;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<9;i++)
{
	printf("%d",a[i]);
}
printf("\nenter the maximum number :");
a[0]=max;
printf("%d",max);
	return 0;
}

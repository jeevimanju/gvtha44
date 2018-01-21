#include<stdio.h>
int main()
{
int a,n,i;
scanf("%d%d",&a,&n);
for(i=a;i<n;i++)
{
if(i%2==0)
printf("%d is a even number\n",i);
}
return 0;
}

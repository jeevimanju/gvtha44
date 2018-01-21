#include<stdio.h>
int main()
{
int i,f=10,n=20;
printf("enter the first interval");
scanf("%d",&n);
printf("enter the second interval");
scanf("%d",&f);
for(i=f;i<=n;i++)
{
if(i%2==0)
{
printf("%d is an even number");
}
}
return 0;
}

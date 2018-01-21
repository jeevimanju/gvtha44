#include<stdio.h>
int main()
{
int a,i,b;
printf("enter the number");
scanf("%d",&a);
printf("enter the limit");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
if(i%a==0)
{
printf("%d",i);
}
}
return 0;
}

#include<stdio.h>
int main()
{
int i,f=10,b=20;
printf("enter the first interval");
scanf("%d",&b);
printf("enter the second interval");
scanf("%d",&f);
for(i=f,i<=b,i++)
{
if(i%2==1)
{
printf("%d is an odd number");
}
}
return 0;
}

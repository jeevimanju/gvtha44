#include<stdio.h>
int main()
{
int a,count=0;
scanf("%d",&a);
printf("the number is %d",a);
while(a!=0)
{
a=a/10;
count++;
}
printf("no of digits is %d",count);
return 0;
}

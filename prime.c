#include<stdio.h>
int main()
{
int a,i,count=0;
printf("enter the number");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if((a%1)==0)
count++;
}
if(count==0)
{
printf ("yes");
}
else
{
printf ("no");
}
return 0;
}

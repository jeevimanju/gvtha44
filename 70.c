#include<stdio.h>
#include<math.h>
int main()
{
int i,n,c;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if((pow(2,i))==n)
{
c=pow(2,i+1);
}
}
printf("%d",c);
return 0;
}

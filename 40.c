#include <stdio.h>
void main()
{
int s=0,num1,num2,j,n;
scanf("%d%d%d",&num1,&num2,&n);
for(j=0;j<n;j++)
{
s=num1+num2;
printf("%d\n",s);
num1=num2;
num2=s;
}
}

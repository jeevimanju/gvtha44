#include <stdio.h>
int main(void)
{
int a[100],k,i,j,b,s=0;
printf("\n enter the no. of element in array");
scanf("%d",&b);
printf("\n enter the values");
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
}
printf("\n enter the no. of elements to be added");
scanf("%d",&k);
for(j=0;j<k;j++)
{
    s=s+a[j];
}
printf("\n the sum value is %d",s);
    return 0;
}

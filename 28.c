#include<stdio.h>
void main()
{
int i,a[10],b;
printf("enter no of elements in an array\n");
scanf("%d",&b);
printf("enter the elements in an array:\n");
for(i=0;i<b;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<b;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}

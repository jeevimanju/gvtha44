#include<stdio.h>
int main()
{
int c,a,i,j;
scanf("%d",&c);
int b[c];
printf("\n the input of an array is");
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(j=0;j<c;j++)
{
printf("%d",b[j]);
}
return 0;
}

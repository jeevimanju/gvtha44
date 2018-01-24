#include<stdio.h>
int main()
{
int c,a,i,k;
scanf("%d",&c);
int b[c];
printf("\n the input of an array is");
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(k=0;k<c;k++)
{
printf("%d",b[k]);
}
return 0;
}

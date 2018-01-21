#include <stdio.h>
int main()
{
int b[100]={1,2,3}; 
int i,n,size=3,max;
max=b[0];
for(i=0;i<size;i++)
{
if(b[i]<max)
{
max=b[i];
}
}
printf("%d",max);
return 0;
}

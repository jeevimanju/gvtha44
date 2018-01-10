#include<stdio.h>
int main()
{
int a,b,c;
a=30;
b=20;
c=10;
if((a>b)||(a>c))
{
printf("a is larger");
}
else if((b>c)||(b>a))
{
prinf("b is larger");
}
else
{
printf("c is large");
}
return 0;
}

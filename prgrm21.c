#include<stdio.h>
int main()
{
int b,a,d;
printf("first term",a);
scanf("%d",&a);
printf("common difference",d);
scanf("%d",&d);
printf("N term",b);
scanf("%d",&b);
while(counter<=b)
{
 a=1+(counter-1)*d;
printf("%d",a);
counter++;
}
return 0;
}

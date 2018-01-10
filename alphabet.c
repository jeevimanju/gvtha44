#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
printf("enter :%c",ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
printf("alphabet",ch);
else
printf("not an alphabet",ch);
return 0;
}

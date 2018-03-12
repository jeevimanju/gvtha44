#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,j,flag=0;
printf("Enter the string:");
scanf("%s",&a);
i=0;
j=strlen(a)-1;
while(j>1)
{
    if(a[i++]!=a[j--])
    {
        flag=1;
        break;
    }
}
if(flag==1)
{
    printf("The given string is not palindrome");
}
else
{
    printf("The given string is palindrome");
}
}

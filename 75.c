#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int n;
    printf("enter num");
    scanf("%s",&a);
    n=strlen(a);
    if(n%2==1)
    {
    	a[n/2]='*';
    }
    else
    {
    	a[n/2]='*';
    	a[(n/2)-1]='*';
    }
    printf("%s",a);
    return 0;
}

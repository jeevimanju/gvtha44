#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int n,i;
    scanf("%d",&n);
    scanf("%s",&s);
    for(i=1;i<n;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before swap :%d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf(" after swap of number is %d %d",a,b);
    return 0;
    
}

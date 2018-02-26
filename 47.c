#include<stdio.h>
int main()
{
    int max,min,a[50],j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(j=0;j<=n;j++)
    scanf("%d",&a[j]);
    min=max=a[0];
    for(j=0;j<=n;j++)
    {
        if(a[j]>=max)
        max=a[j];
    
    else
    
        min=a[j];
    }
    printf("%d%d",max,min);
}

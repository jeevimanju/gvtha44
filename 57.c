#include<stdio.h>
int main()
{
	int a,b,t;
	printf("the num before swap is");
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);	
	t=a;
	a=b;
	b=t;
	printf("\n the num after swap is");
	printf("%d %d",a,b);
	return 0;
	
}

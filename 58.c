#include<stdio.h>
int main()
{
	int a,b,t;
	printf("the num before swap is");
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);	
	t=a^b;
	a=t^a;
	b=t^b;
	printf("\n the num after swap is");
	printf("%d %d",a,b);
	return 0;
	
}

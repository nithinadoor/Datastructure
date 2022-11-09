#include<stdio.h>

void sum()
{
	sum=a+b;
	printf("sum=%d",sum);
}
int main()
{
	int a,b,s=0;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	sum();
}

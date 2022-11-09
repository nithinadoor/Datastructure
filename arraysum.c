#include<stdio.h>
void main()
{
	int i,a[20],n,sum=0;
	printf("enter size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum= %d",sum);
	
}

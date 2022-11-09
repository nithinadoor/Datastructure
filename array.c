#include<stdio.h>
void main()
{
	int n,a[20],i;
	printf("enter size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements \n");
	for(i=0;i<n;i++){
	printf("%d \n",a[i]);	
	}
}

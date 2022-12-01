#include<stdio.h>
void main()
{
	   int a[100],b[100],c[100],i,j,k=0,m,n,p;
\
   	   printf("enter size of first array");
           scanf("%d",&m);
	   printf("enter size of second array");
	   scanf("%d",&n);

	   printf("enter elements of array 1");
	   for(i=0;i<m;i++)
	   scanf("%d",&a[i]);

	   printf("enter elements of array 2");
	   for(j=0;j<n;j++)
	   scanf("%d",&b[j]);

	   printf("array 1 elements are");
	   for(i=0;i<m;i++)
	   {
	 	printf("%d \n",a[i]);	
	   }
	   printf("array 2 elements are");
	   for(j=0;j<n;j++)
	   {
	 	printf("%d \n",b[j]);	
	   } 

	   i=0,j=0;

	   p=m+n;
	   while(i<m&&j<n)
	   {
		
			if(a[i]<b[j])
			{
				c[k]=a[i];
				i++;
			}
			else
			{	
				c[k]=b[j];
				j++;
			}
		k++;  	
	   }

	  if(i>=m)
	  {
		while(j<n)
                       {
			c[k]=b[j];
			j++;
			k++;
		}
	  }
	  if(j>=n)
	  {
		while(i<m)
                       {
			c[k]=a[i];
			i++;
			k++;
		}
	  }


	  printf("the merged sorted array is ");
	  for(k=0;k<p;k++)
	  {
	    printf("%d \n",c[k]);
	  }
	   
	   
	   

   
}

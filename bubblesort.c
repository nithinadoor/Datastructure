#include<stdio.h>
void main()
{
    int a[5],i,n,temp,j;
    printf("enter the range :");
    scanf("%d",&n);
    printf("enter the values of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-i);i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("the sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }   

}
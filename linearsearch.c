#include<stdio.h>
void main()
{
    int a[5],i,n,k;
    printf("enter the range :");
    scanf("%d",&n);
    printf("enter the values in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key to be searched");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            k=1;
            break;
        }
    }
    if(k==1){
        printf("element found at index %d",i);
    }
    else{
        printf("element not found");
    }
}
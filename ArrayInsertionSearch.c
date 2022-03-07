#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5],item,n,i;
    printf("\n Enter the elements:\n");
    scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
	printf("\n The element is :\n",i+1);
	scanf("%d",&a[i]);
    }
	printf("\n");
	printf("\n enter the item to be searched\n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
	
	 if(item==a[i])
	 {
	 	printf("\n item found\n",i+1);
	 	break;
	 }
    }
	 if(i==n)
	 {
	 printf("\n not found");
    }
   }
	

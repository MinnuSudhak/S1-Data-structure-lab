#include<stdio.h>
#include<conio.h>
void main()
{
	int a1[50],a2[50],a3[100],m,n,i,j,k;
     printf("enter the size of a1:\n");
	 scanf("%d",&m);
	 printf("enter the elements:\n");
	 for(i=0;i<m;i++)
	 {
	 	scanf("%d",&a1[i]);
		 }	
	printf("enter the size of a2:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a2[j]);
	}
	i=0;
	j=0;
	while(i<m&&j<n)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			i++;
		}
		else
		{
			a3[k]=a2[j];
			j++;
		}
		k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			a3[k]=a2[j];
			j++;
			k++;
		}
		
	}
	if(j>=n)
	{
		while(i<m)
		{
			a3[k]=a1[i];
			i++;
			k++;
		}
	}
	printf("merged arrays");
	for(i=0;i<m+n;i++)
	{
		printf("\n%d",a3[i]);
	}
	
}
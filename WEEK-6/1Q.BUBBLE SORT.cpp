#include<stdio.h>
main()
{
	int n,i,j,temp;
	printf("enter the no. of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("elements after sorting are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}


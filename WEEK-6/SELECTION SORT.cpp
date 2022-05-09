#include<stdio.h>
int main(){
	int arr[25],i,j,n,temp,min;
	printf("Enter the Array Size \n");
	scanf("%d",&n);
	printf("Enter the Array Elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[min]>arr[j])
			min=j;
		}
		if(min!=i)
	   	temp=arr[i];
		arr[i]=arr[min];  
		arr[min]=temp;
		
	}
	printf("Array After Selection Sort \n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}

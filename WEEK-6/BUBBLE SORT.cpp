#include<stdio.h>
int main(){
	int arr[25],i,j,n;
	printf("Enter the Size \n");
	scanf("%d",&n);
	printf("Enter Array Elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    for (i=0;i<n-1;i++){
    	int temp;
    	for(j=0;j<n-1-i;j++){
    		if(arr[j]>arr[j+1]){
    		temp=arr[j];
    		arr[j]=arr[j+1];
    		arr[j+1]=temp;
			}
		}
	}
	printf("Array Elements After Bubble Sort \n ");
	for(i=0;i<n;i++){
		printf("%d \t",arr[i]);
		
	}
	return 0;
}

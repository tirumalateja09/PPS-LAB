#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int first,int mid,int last){
	int b[50];
	int i,j,k;
		i=first;
		j=mid+1;
		k=first;
		while(i<=mid&&j<=last){
			if(arr[i]<=arr[j]){
				b[k++]=arr[i++];
			}
			else{
				b[k++]=arr[j++];
			}
		}
		if(i>mid){
			while(j<=last){
				b[k++]=arr[j++];
			}
			
		}
		else{
			while(i<=mid){
				b[k++]=arr[i++];
			}
		}
		for(i=first;i<=last;i++){
			arr[i]=b[i];
		}
	}
void mergesort(int arr[],int first,int last){
	if(first<last){
		int mid=(first+last)/2;
		mergesort(arr,first,mid);
		mergesort(arr,mid+1,last);
		
		merge(arr,first,mid,last);
	}
	
}
int main(){
	int arr[50],n,i;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter the elements into array \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	printf("Elements After Merg Sort\n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	return 0;
	}

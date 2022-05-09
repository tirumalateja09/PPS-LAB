#include<stdio.h>
void quicksort( int array[],int first,int last);
int main(){
	int array[25],i,n;
	printf("enter the number of elements :");
	scanf("%d",&n);
	printf("enter the elements in a array:");
	for(i=0;i<n;i++){
	scanf("%d",&array[i]);
	}
	quicksort(array,0,n-1);
	printf("sorted list is :");
	for(i=0;i<n;i++){
		printf("\t%d",array[i]);
	}
	return 0;
}
void quicksort(int array[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(array[i]<=array[pivot]/*&& i<last*/)
			printf("%d %d",i,array[i]);
			i++;
		    while(array[j]>array[pivot])
		    j--;
		    if(i<j){
		    	temp=array[i];
		    	array[i]=array[j];
		    	array[j]=temp;
			}
		}
		    temp=array[pivot];
			array[pivot]=array[j];
			array[j]=temp;
			quicksort(array,first,j-1);
			quicksort(array,j+1,last);
	}
	
	
}

#include<stdio.h>
int fact(int);
int main(){
	int factorial,n;
	printf("enter the number:");
	scanf("%d",&n);
	factorial=fact(n);
	printf(" %d! is  %d",n,factorial);
}
int fact(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

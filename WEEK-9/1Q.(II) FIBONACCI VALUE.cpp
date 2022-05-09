#include<stdio.h>
int fib(int);
int main(){
	int n,f;
	printf("enter the value:");
	scanf("%d",&n);
	f=fib(n);
	printf("%d",f);
}
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else
	return fib(n-1)+fib(n-2);
}

#include<stdio.h>
int main(){
	int n,h,t,u;
	printf("ENTER THREE DIGIT INTEGER :");
	scanf("%d",&n);
     u=n%10;
     t=(n/10)%10;
     h=n/100;
     printf("%d hundreds %d tens %d units",h,t,u);
}

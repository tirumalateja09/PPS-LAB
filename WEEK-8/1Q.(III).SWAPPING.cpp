#include<stdio.h>
int swap(int,int);
int main(){
	int a,b,s;
	printf(" enter the values of a & b \n");
	scanf("%d%d",&a,&b);
	printf("before swaping\n");
	printf("a=%d,b=%d\n",a,b);
	s=swap(a,b);

}
int swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping \n");
	printf("a=%d,b=%d",x,y);
}

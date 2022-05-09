/*iii.sum=1+x/1!+x^2/2!+x^3/3!..............,*/
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,x,n,fact;
	float sum=0;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter number of terms :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fact=1;
		for(j=0;j<=i;j++){
			if(j==0)
			fact=1;
			else
			fact=fact*j;
		}
		sum=sum+pow(x,i)/fact;
		
	}
	printf("sum of series is :%f",sum );
}

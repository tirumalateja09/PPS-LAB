#include<stdio.h>
int main(){
	int i,j,prime,count=1;
	for (i=1; ;i++){
		prime=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				prime++;
			}
			
			}
			if(prime==2){
				printf("%d ",i);
				count++;
			}
			if(count>100){
				break;
			}
			
	    }
}

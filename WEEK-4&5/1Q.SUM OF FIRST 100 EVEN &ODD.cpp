// sum of even sum and oddsum
#include<stdio.h>
int main(){
	int evensum=0,oddsum=0,count=1,i=1;
	while(count<=100){
		if(i%2==0){
			evensum+=i;
			count++;
			
		}
		else{
			oddsum+=i;
		
		}
		
		i++;
	}
	printf("evensum=%d,oddsum=%d",evensum,oddsum);
	return 0;
}

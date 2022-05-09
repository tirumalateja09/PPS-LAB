#include<stdio.h>
int main(){
	int d,m,y;
	printf(" enter day  as date,month,year");
	scanf("%d%d%d",&d,&m,&y);  
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d<31){
			printf("%.2d : %.2d : %d ",d+1,m,y);
		}
		else if(d==31&&m==12){
			printf("%.2d : %.2d : %d ",d=1,m=1,y+1);	
		}
		else if(d==31&&m!=12){
		printf("%.2d : %.2d : %d ",d=1,m+1,y);
		}
		
	}
	else if(m==4||m==6||m==9||m==11){
		if(d<30){
		printf("%.2d : %.2d : %d ",d+1,m,y);	
		}
		else if(d==30){
		printf("%.2d : %.2d : %d ",d=1,m+1,y);		
		}
	}
	else if(m==2){
		if(d<28){
		printf("%.2d : %.2d : %d ",d+1,m,y);	
		}
		else if((d==28 && ( y%4==0&& y%100!=0  || y%400==0))){
		printf("%.2d : %.2d : %d ",d+1,m,y);	
		}
		else if((d==29 && ( y%4==0&& y%100!=0  || y%400==0))){
		printf("%.2d : %.2d : %d ",d=1,m+1,y);	
		}
		else if(d==28){
		printf("%.2d : %.2d : %d ",d=1,m+1,y);	
		}
		
}
else{
	printf("enter correct date");
}
}

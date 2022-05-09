/*5. Given as input three integers representing a date as day, month,
year, print the number day, month and year for the next day's date.
Typical input: “28 2 1992” Typical output: “Date following
28:02:1992 is 29:02:1992”*/
#include<stdio.h>
int main(){
	int d,m,y;
	printf("enter the date as day, month and year: ");
	scanf("%d %d %d",&d, &m, &y);
	if((y%4==0 && y%100!=0) || (y%400==0))     //leap year condition
	{
		if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10){
			if(d<31){
				d=d+1;
			}
			else if(d==31){
				d=1;
				m=m+1;
			}
		}
		else if(m==4 || m==6 || m==9 || m==11){
			if(d<30){
				d=d+1;
			}
			else if (d==30){
				d=1;
				m=m+1;
			}
		}
		else if(m==2) {
			if(d<29) {
				d=d+1;
			}
			else if(d==29) {
				d=1;
				m=m+1;
			}
		}
		else if(m==12){
			if(d<31){
				d=d+1;
			}
			else if(d==31){
				d=1;
				m=1;
				y=y+1;
			}
		}
	}
	else     //not aleap year 
	{
		if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10) {
			if(d<31) {
				d=d+1;
			}
			else if(d==31) {
				d=1;
				m=m+1;
			}
		}
		else if(m==4 || m==6 || m==9 || m==11) {
			if(d<30) {
				d=d+1;
			}
			else if(d==30){
				d=1;
				m=m+1;
			}
		}
		else if(m==2) {
			if(d<28){
				d=d+1;
			}
			else if(d==28){
				d=1;
				m=m+1;
			}
		}
		else if(m==12)
		{
			if(d<31){
				d=d+1;
            }
			else if(d==31){
				d=1;
				m=1;
				y=y+1;
			}
		}
	}
	printf("THE FOLLOWING DAY IS %.2d : %.2d : %d ",d,m,y);   }


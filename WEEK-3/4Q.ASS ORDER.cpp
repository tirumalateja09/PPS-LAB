#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 integers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c) 
	   if(b>c){
	   printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",c,b,a);
	   }
	   else {
	   printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",b,c,a);
	   }
	else if (b>a&&b>c)
	    if(c>a){
	    printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",a,c,b);
		}
	    else{
	    printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",c,a,b);
		}
	else if(c>a&&c>b)
	    if(b>a){
	    printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",a,b,c);
		}
	    else{
	    printf("THE ASSENDING ORDER OF SERIES IS : %d %d %d",b,a,c);
		}
	return 0;
}

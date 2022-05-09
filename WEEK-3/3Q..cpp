#include<stdio.h>
int main(){
   int a,b,ch1,ch2;
   printf("enter the a,b values ");
   ch1=scanf("%d",&a);
   ch2=scanf("%d",&b);
   if(ch1==0||ch2==0)
   printf("ERROR");
   else
   if(a<=b){
   	
   if(a<b)
   printf("up");
   else
   printf("equal");

  }
  else
  printf("down");

   
   return 0;
   
   }
    

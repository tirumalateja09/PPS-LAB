#include<stdio.h>
void reverse();
int main(){
 printf("Enter a string:");
 reverse();
}
void reverse(){
 char c;
 scanf("%c",&c);
 if(c!='\n')
 {
   reverse();
   printf("%c",c);
 }
  printf("\n");
}

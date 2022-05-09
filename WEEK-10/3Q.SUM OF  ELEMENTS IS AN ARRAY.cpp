#include<stdio.h>
int main()
{
 int array[50];
 int i,sum=0,n;
 printf("enter the number of elements in array:");
 scanf("%d",&n);
 int *ptr;
 printf("enter array elements\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&array[i]);
}
ptr=array;
 for(i=0;i<n;i++)
 {
 sum=sum+*ptr;
 ptr++;
}
printf("\nThe sum is:%d",sum);
}


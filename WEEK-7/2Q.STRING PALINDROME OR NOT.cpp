#include<stdio.h>
#include<string.h>
main()
{
char str[10];
int len,i,f=0;
printf("enter the string:\n");
gets(str);
len=strlen(str);
 for(i=0;str[i] != '\0';i++)
{
if(str[i] != str[len-i-1])
f=1;
break;
}
if(f==1)
{
 printf("it is not a palindrome: %s",str);
}
else
{
printf("it is a palindrome:%s",str);
}
}


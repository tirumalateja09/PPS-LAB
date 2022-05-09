#include<stdio.h>
#include<string.h>
int  main()
{
  char s[100];
  printf("enter a string in multiple lines terminated with $:\n");
  scanf("%[^$]",s); 
  int i;
  int lines,words,characters;
  lines=words=characters=0;
  
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='\n')
    {
      words++;
      lines++;
    }
    else if(s[i]==' '||s[i]=='\t')
    {
       words++;
       characters++;
    }
    else if(s[i]!=' '&& s[i]!='\n')
    {
       characters++;
    }
  }
  if(characters>0)
  {
    words++;
    lines++;
  }
  printf("number of characters in given string is %d\n",characters);
  printf("number of words in given string is %d\n",words);
  printf("number of lines in given string is %d\n",lines);
}


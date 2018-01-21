#include<stdio.h>
main()
{
  char str[50]="hello world";
  int i,count=0;
  for(i=0;str[i]!='\0';i++)
  {
     if(str[i]=='')
     {
       count++;
       }
       }
       printf("the count of space is %d",count);
       }

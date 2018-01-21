#include<stdio.h>
int main()
{
  char str[50];
  int count,c;
  printf("enter the string:");
  gets(str);
  c=strlen(str);
  for(i=0;i<=c;i++)
  {
    if(str[i]=='.')
    {
     count=count+1;
     }
     }
     printf("the numberof sentence in the paragraph is %d",count);
     getch();
     return 0;
     }

#include<stdio.h>
int main()
{
 char str[50];
 int i;
 clrscr();
printf("enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
  for(j=i+1;str[i]!='\0';j++)
  {
   if(str[i]==str[j])
   {
    printf("yes isogram");
    }
    else
    printf("no isogram");
    }
    getch();
    return 0;
    }

#include<stdio.h>
int main()
{
char str[50],str1[50];
int i;
char ch;
clrscr();
printf("enter the string:");
gets(str);
for(i=0;i<3;i++)
{
   ch=str[i];
   str1[i]=ch;
   str1[i]='\0';
   }
   printf("the string is %s",str1);
   getch();
   return 0;
   }

#include<stdio.h>
int main()
{
 char str[100]="xcode";
 int i,len;
 char temp;
 len=strlen(str);
 for(i=0;i<len;i++)
 {
   temp=str[i];
   str[i]=str[i+1];
   str[i+1]=str[i];
   }
   printf("%s",str);
   getch();
  return 0;
}

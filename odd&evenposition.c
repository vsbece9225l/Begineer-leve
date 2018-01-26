#include<stdio.h>
int main()
{
 char even[50],odd[50],str[40];
 int i;
 printf("enter the string:")
 gets(str);
 while(str[i]!='\0')
 {
   if(i%2==0)
      even[j++]=str[i];
      else
      odd[k++]=str[i];
      }
      printf("the odd position& even  position  string is %s%s",odd,even);
      return 0;
      }

#include<stdio.h>
int main()
{
 char s[100];
 int i,j;
 j=strlen(s);
 for(i=0;i<=j;i++)
 {
   if(i==0)
   {
     s[i]=toupper(s[i]);
     }
     if(i=='')
     {
       s[i+1]=toupper(s[i+1]);
       }
    }
    printf("%s",s);
    getch();
    return 0;
    }

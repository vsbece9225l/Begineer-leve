#include<stdio.h>
int main()
{
 char str[50]="helloworld123";
 int i;
 for(i=0;str[i]='\0';i++)
 {
  if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>=0&&str[i]<=9))
  {
    printf("yes");
    }
    }
    return 0;
    }
    

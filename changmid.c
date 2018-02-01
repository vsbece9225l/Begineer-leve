#include<stdio.h>
int main()
{
 char str[50];
 int len,mid;
 printf("\nenter the string:");
 gets(str);
 len=strlen(str);
 if(len%2==0)
 {
    mid=len/2;
    str[mid-1]='*';
    }
    else
    {
     mid=len/2;
     str[mid]='*';
     }
    printf("%s",str);
    return 0;
    }

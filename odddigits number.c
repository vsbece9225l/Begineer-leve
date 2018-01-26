#include<stdio.h>
int main()
{
  int n,digit,add;
  printf("enter the number:");
  scanf("%d",&n);
  while(n>0)
  {
     digit=n%10;
     n=n/10;
     add=digit%2;
     }
     if(add!=0)
        printf("\n %d",digit);
        return 0;
        }

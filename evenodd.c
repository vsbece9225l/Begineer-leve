#include<stdio.h>
int main()
{
  int temp,n1,n2;
  printf("enter the two numbers:");
  scanf("%d%d",&n1,&n2);
  temp=n1-n2;
  if(temp%2==0)
    printf("this is even number even=%d",temp);
    else
     printf("this is odd number odd=%d",temp);
     return 0;
     }
     
    

#include<stdio.h>
int main()
{
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  while(num!=0)
  {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("the sumof integer is %d",sum);
    return 0;
    }

#include<stdio.h>
int main()
{
 int num,digit,sum=0;
 printf("enter the number:");
 scanf("%d",&num);
 while(num!=0)
 {
   digit=num%10;
   num=num/10;
   sum=sum+digit;
   }
   printf("the sum of digits %d",sum);
   return 0;
   }

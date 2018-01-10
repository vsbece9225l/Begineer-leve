#include<stdio.h>
int main()
{
 int num1,num2,product;
 printf("get the two numbers:");
 scanf("%d%d",&num1,&num2);
 product=num1*num2;
 if(product%2==0)
 {
   printf("this is even number=%d",product);
   }
   return 0;
   }

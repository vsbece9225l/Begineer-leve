#include<stdio.h>
int main()
{
 int num1,num2;
 printf("enter the numbers:");
 scanf("%d%d",&num1,&num2);
 printf("before swap:num1=%d num2=%d",num1,num2);
 num1=num1^num2;
 num2=num1^num2;
 num1=num1^num2;
 printf("after swap num1=%d num2=%d",&num1,num2);
 return 0;
 }

#include<stdio.h>
int main()
{
   int num,sum=0,digit;
   printf("enter the number:");
   scanf("%d",&num);
   while(num!=0)
   {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("%d",sum);
    getch();
    return 0;
    }

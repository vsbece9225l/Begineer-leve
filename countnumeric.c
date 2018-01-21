#include<stdio.h>
int main()
{
   int num,count=0;
   printf("enter the number:");
   scanf("%d",&num);
   while(num!=0)
   {
    digit=num%10;
    count++;
    num=num/10;
    }
    printf("%d",count);
    getch();
    return 0;
    }

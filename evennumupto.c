#include<stdio.h>
int main()
{
 int num;
 printf("enter the number:");
 scanf("%d",&num);
 if(num%2==0)
 {
   printf("%d",num-2);
   }
   else
   {
    printf("%d",num-1);
    }
    getch();
    return 0;
    }

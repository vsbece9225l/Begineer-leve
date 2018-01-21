#include<stdio.h>
int main()
{
 int num[10];
 int i,biggest;
 printf("enter ten numbers:");
 for(i=0;i<10;i++)
 {
   scanf("%d",&num[i]);
   }
   biggest=num[0];
   for(i=1;i<10;i++)
   {
     if(num[i]>biggest)
     {
      biggest=num[i];
      }
      }
      printf("greatest among ten number is %d",biggest);
      getch();
      return 0;
      }
       

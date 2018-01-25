#include<stdio.h>
int main()
{
 int i,n;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   if(n%i==0)
   {
     count++;
     }
     }
     if(count==2)
       printf("the number is prime%d",n);
       else
         printf("the number is not prime %d",n);
         return 0;
         }
     

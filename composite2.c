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
       printf("this is prime number:");
       else
         printf("this is composite number:")
         return 0;
         }

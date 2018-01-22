#include<stdio.h>
int main();
{
int numl,i,count=0;
printf("enter the number:");
scanf("%d",&num);
for(i=1;i<num;i++)
{
 if(num%i==0)
 {
   count++;
   }
   }
   if(count==0)
   {
    printf("no,it is not composite");
    }
    else
    {
     printf("yes,it is composite number:");
     }
     getch();
     return 0;
     }
   
 

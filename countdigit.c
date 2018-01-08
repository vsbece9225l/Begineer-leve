#iclude<stdio.h>
int main()
{
 int num,digit;
 printf("enter the number:");
 scanf("%d",&num);
 while(num!=0)
{
 num=num/10;
 digit=num%10;
 count++;
 }
 printf("the count of digit is %d",count);
 }
 getch();
 return 0;
 }

#include<stdio.h>
int main()
{
  int n;
  int n1,n2,i;
  printf("enter the number that we will find:");
  scanf("%d",&n);
  printf("enter the number of two intravals:");
  scanf("%d%d",&n1,&n2);
  for(i=n1;i<n2;i++)
  {
    if(i==n)
    printf("yes");
    }
    return 0;
    }

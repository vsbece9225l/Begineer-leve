#include<stdio.h>
int main(){
int i,j,a[4],minimum;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 minium=a[0];
for(i=1;i<n;i++)
{
 if(a[i]<minimum)
 {
    minimum=a[i];
    }
    }
    printf("the minium number is:%d",minimum);
    return 0;
    }
  

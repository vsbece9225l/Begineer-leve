#include<stdio.h>
int main()
{
  int l,w,h,volume,sa;
  printf("enter the l&w");
  scanf("%d%d%d",&l,&w,&h);
  volume=l*w*h;
  sa=(2*l*w)+(2*l*h)+(2*h*w);
  printf("te volume of cuboid is %d",volume);
  printf("the total surface area of cuboid is %d",sa);
  getch();
  return 0;
  }

#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[10];
    printf("\nenter the number");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    }
    

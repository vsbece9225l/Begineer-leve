#include<stdio.h>

int main() {
    char str[50];
    int i;
    printf("\nenter the string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='z'))
        {
            break;
        }
    }
    printf("not numeric");
        return 0;
    }

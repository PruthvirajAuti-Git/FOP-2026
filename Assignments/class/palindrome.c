#include<stdio.h>
#include<string.h>  
int main()
{
    char str[100];
    int i,len;
    char pal[100];
    printf("Enter a string: ");
    scanf("%s",str);
    len = strlen(str);
    for(i=len-1;i>=0;i--)
    {
        pal=str[i];

    }
    if(pal==str)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }
    return 0;
}
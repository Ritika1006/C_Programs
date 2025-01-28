#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("the character is in lower case");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("the character is in upper case");
    }
    else
    {
        printf("it is special character");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char c;
    int l,u;
    printf("Enter the characters:");
    scanf("%c",&c);
    l=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    u=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(l||u)
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the character is consonant");
    }
    return 0;
}
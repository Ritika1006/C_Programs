#include<stdio.h>
int main()
{
    char s1[10]="Ritika";
    char s2[10];
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("After copied=%s",s2);
    return 0;
}
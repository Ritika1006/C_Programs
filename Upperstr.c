#include<stdio.h>
int main()
{
    char s1[10]="Ritika";
    int i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]>='a'||s1[i<='z'])
        {
            s1[i]=s[i]-32;
        }
        i++
    }
    printf("the string into uppercase=%s",s1);
    return 0;
}
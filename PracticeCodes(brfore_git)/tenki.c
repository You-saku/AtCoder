#include<stdio.h>
#include<string.h>
int main()
{
    char s[4],t[4],ch1,ch2;

    gets(s);
    gets(t);
    int i,c;
    c=0;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==t[i])
            c++;
    }

    printf("%d\n",c);

    return 0;
}

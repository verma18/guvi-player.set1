#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[1000],b[1000];
    int i=0;
    gets(s);
    while(s[i]!='\0')
    {
        b[i]=s[i];
        i++;
    }
    b[i]='.';
    b[i+1]='\0';
    puts(b);

}

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char temp,s[100000];
    int i,j=0;
    gets(s);
    i=0;
    while(s[i]!='\0')
    {
        j++;
        i++;
    }
    printf("%d",j);
    for(i=0;i<j/2;i++)
    {
        temp=s[i];
        s[i]=s[j-i];
        s[j-i]=temp;
    }
    s[j+1]='\0';
    puts(s);
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[10000],a[10000],b[10000];
    int i,k;
    gets(s);
    i=0;
    while(s[i]!=' ')
    {
        a[i]=s[i];
        i++;

    }
    k=0;
    a[i]='\0';
    i++;
    while(s[i]!='\0')
    {
        b[k]=s[i];
        k++;
        i++;
    }
    b[k]='\0';
    if(strlen(a)==strlen(b))
    {
        i=0;
        k=0;
        while(a[i]!='\0')
        {
            if(a[i]!=b[i])
            {
                k++;
            }
            i++;
        }
        if(k==1)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No");



}

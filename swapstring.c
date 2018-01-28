#include<stdio.h>
#include<stdlib.h>
void main()
{

    char temp,s[100];
    int n,i;
    gets(s);
    //n=strlen(s);
    i=0;
    while (s[i]!='\0')
    {
        if(s[i+1]!='\0')
        {
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }
        i=i+2;



}
puts(s);
}

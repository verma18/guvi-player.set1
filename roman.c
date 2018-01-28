#include<stdio.h>
#include<stdlib.h>

void main()
{int i,j,num=0;
    char s[20];
    gets(s);
    j=strlen(s);
    for(i=0;i<j;i++)
    {
        if(s[i]=='I')
            num=num+1;
        else if(s[i]=='V')
            num=num+5;
        else if(s[i]=='X')
        {
            if(s[i-1]=='I')
                num=num+8;
            else
                num=num+10;

        }
        else if(s[i]=='L')
            num=num+50;
        else if(s[i]=='C')
            num=num+100;
        else if(s[i]=='D')
            num=num+500;
        else if(s[i]=='M')
            num=num+1000;
        else
        num=num+0;

    }
    printf("%d",num);

}

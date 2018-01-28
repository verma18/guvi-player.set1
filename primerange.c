#include<stdio.h>
void main()
{
    int l,i,k=0,j,r,count=0;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {k=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                k++;
        }
        if(k==0)
            count++;

    }
    printf("%d",count);

}

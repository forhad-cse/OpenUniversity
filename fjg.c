#include<stdio.h>
main()
{
    int n,i;
    for(n=1;n<=20;n=n+1)
    {
        for(i=1;i<=4;i=i+1);
        {
            printf("%d*%d=%d\n",n,i,n*i);
        }
    }
}

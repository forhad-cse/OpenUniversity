#include<stdio.h>
main()
{
    int num1,num2,value;
    char sign;
    printf("Please enter a number:");
    scanf("%d",&num1);
    printf("Please enter another number:");
    sacnf("%d",&num2);
    value=num1+num2;
    sign='+';
    printf("%d%c=%d\n",num1,sign,num2,value);
    value=num1-num2;
    sign='-';
    printf("%d%c=%d\n",num1,sign,num2,value);
    value=num1*num2;
    sign='*';
    printf("%d%c=%d\n",num1,sign,num2,value);
    value=num1/num2;
    sign='/';
    printf("%d%c=%d\n",num1,sign,num2,value);

}



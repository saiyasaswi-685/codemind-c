#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a-b;
    if(b>a)
    {
        printf("0");
    }
    else
    {
        printf("%d",c);
    }
}
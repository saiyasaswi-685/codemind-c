#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int s=a+b;
    int t=c+d;
    if(s<t)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",t);
    }
}
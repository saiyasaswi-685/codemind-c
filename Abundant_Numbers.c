#include<stdio.h>
int main()
{
    int n,i,d=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            d=d+i;
        }
    }
    if(d>=n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
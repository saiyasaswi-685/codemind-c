#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,dc=0,sum=0,r;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        t/=10;
        dc=dc+1;
    }
    t=n;
    while(t>0)
    {
        r=t%10;
        sum=sum+pow(r,dc);
        t/=10;
        dc=dc-1;
        
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
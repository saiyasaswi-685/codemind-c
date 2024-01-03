#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int number=i;
        int s=1;
        while(number >0)
        {
            int r=number %10;
            if(r==0 || i%r!=0)
            {
                s=0;
                break;
            }
            number/=10;
        }
        if(s==1)
        {
            printf("%d ",i);
        
    }
    }
}
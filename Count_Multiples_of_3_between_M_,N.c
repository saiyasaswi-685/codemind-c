#include<stdio.h>
int main()
{
    int i,a,b,d=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0){
            d=d+1;
        }
        
    }
    printf("%d ",d);
}
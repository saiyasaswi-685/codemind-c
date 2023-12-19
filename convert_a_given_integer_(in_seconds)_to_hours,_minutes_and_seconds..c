#include<stdio.h>
int main()
{
    int s,H,M,S;
    scanf("%d",&s);
    H=s/3600;
    M=(s-(3600*H))/60;
    S=(s-(3600*H)-(M*60));
    printf("H:M:S-%d:%d:%d",H,M,S);
}
#include <stdio.h>
int main ()
{
    int x,y,l;
    scanf("%d%d",&x,&y);
    l = x-y;
    float lp= (l*100.0)/x;
    printf("%.2f",lp);
}
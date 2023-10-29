#include <stdio.h>
int main()
{
    int M;
    scanf("%d",&M);
    int h=M/60;
    int m=M%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}
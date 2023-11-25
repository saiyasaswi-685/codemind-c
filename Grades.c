#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int grade=(p+c+b+m+cs)/5;
    if(grade>=90)
    {
        printf("Grade A");
    }
    else if(grade>=80)
    {
        printf("Grade B");
    }
    else if(grade>=70)
    {
        printf("Grade C");
    }
    else if(grade>=60)
    {
        printf("Grade D");
    }
    else if(grade>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
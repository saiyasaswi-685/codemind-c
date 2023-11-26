#include<stdio.h>
int main()
{
int n,i,last;

scanf("%d",&n);
last=n%10;
while(n!=0){
n=n/10;
if(n<10)
{
break;
}
}
printf("%d",last+n);
}
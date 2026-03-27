#include <stdio.h>
int main ()
{
    int n ,i,f=1;
    printf(" enter the no to find the factorial of  ");
    scanf("%d", &n);
    for( i=1;i<=n;i++)
    {
        f=f*i;}
    printf("factorialof given no is%d",f);
    

}
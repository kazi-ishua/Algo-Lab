#include<stdio.h>
int Fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return Fib(n-1)+Fib(n-2);
    }
}
int main()
{
    int n=0;
    int i;
    scanf ("%d",&i);
    for(n=0;n<=i;n++)
    {
        printf("%d ",Fib(n));
    }
    return 0;
}

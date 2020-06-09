#include<stdio.h>
unsigned long long fibo(int n);
int main()
{
    int n;
    unsigned long long fibonacci;
    printf("Enter a number");
    scanf("%d",&n);
    fibonacci=fibo(n);
    printf("Fibonacci series:%d\n",fibonacci);
    return 0;
}
unsigned long long fibo(int n){

   if (n==0)
    return 0;
   else if (n==1)
   return 1;
   else
   return fibo (n-1)+fibo(n-2);
}

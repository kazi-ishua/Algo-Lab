#include <stdio.h>

int n, F[100000005];

int main() {
    F[0] = 0;
    F[1] = 1;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    F[i] = (F[i - 1] + F[i - 2]) % 10;
    printf("Last digit of a fibo series:%d\n",F[n]);

    return 0;
}

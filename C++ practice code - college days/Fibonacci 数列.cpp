#include <stdlib.h>
#include <stdio.h>
#define MOD 10007
#define MAXN 1000001
int n, i, F[MAXN];
int main()
{
scanf("%d", &n);
F[1] = 1;
F[2] = 1;
for (i = 3; i <= n; ++i)
F[i] = (F[i-1] + F[i-2]) % MOD;
printf("%d\n", F[n]);
return 0;
}

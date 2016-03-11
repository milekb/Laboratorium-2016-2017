#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
short b = SHRT_MAX;
int d = INT_MAX;
long f = LONG_MAX;
long long h = LLONG_MAX;
float j = FLT_MAX;

printf("Short do int: %i\n", (short)d);
printf("Int do long: %i\n"), (int)f);
printf("Long do long long: %li", (long)h);
printf("Long long do float: %lli", (long long)j);

return 0;
}

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
short a = SHRT_MIN, b = SHRT_MAX;
int c = INT_MIN, d = INT_MAX;
long e = LONG_MIN, f = LONG_MAX;
long long g = LLONG_MIN, h = LLONG_MAX;



printf("|          | 'ziarno' | 'precyzja' | format we/wy |\n");
printf("|.........:| ........:|.........:|.........:|\n");
printf("| short | %i | %i | i |\n", a, b);
printf("| int | %i | %i | i |\n", c, d);
printf("| long | %li | %li | li |\n", e, f);
printf("| long long | %lli | %lli | lli |\n", g, h);


return 0;
}

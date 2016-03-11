#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  printf("|%s|%s|%s|%s|%s|%s|\n", "Ilosc_bajtow", "Rozmiar", "Min", "Max", "Ziarno", "Precyzja");
  printf("|-----------|--------|---------------------|---------------------|-------------|----------|\n");
  printf("|%s| %li| %i| %i|%c|%c|\n", "short", sizeof(short), (short)SHRT_MIN, (short)SHRT_MAX, ' ', ' ');
  printf("|%s| %li| %d| %d|%c|%c|\n", "int", sizeof(int), (int)INT_MIN, (int)INT_MAX, ' ', ' ');
  printf("|%s| %li| %li| %li|%c|%c|\n", "long", sizeof(long), (long)LONG_MIN, (long)LONG_MAX, ' ', ' ');
  printf("|%s| %li| %lli| %lli|%c|%c|\n", "long long", sizeof(long long), (long long)LLONG_MIN, (long long)LLONG_MAX, ' ', ' ');
  printf("|%s| %li| %e| %e| %e| %d|\n", "float", sizeof(float), (float)FLT_MIN, (float)FLT_MAX, FLT_EPSILON, (int)FLT_DIG);
  printf("|%s| %li| %le| %le| %e| %d|\n", "double", sizeof(double), (double)DBL_MIN, (double)DBL_MAX, DBL_EPSILON, (int)DBL_DIG);
  printf("|%s| %li| %Le| %Le| %Le| %d|\n", "long double", sizeof(long double), (long double)LDBL_MIN, (long double)LDBL_MAX, LDBL_EPSILON, (int)LDBL_DIG);
  return 0;
}
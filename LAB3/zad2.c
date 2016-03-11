#include <stdio.h>
int main()
{
  short sho=1;
  short sho2=1/2;
  printf("Short: %i / 4 = %i\n", sho, sho2);
  
  int it=1;
  int it2=it/6;
  printf("Int: %i / 6 = %i\n", it, it2);
  
  long log=1;
  long log2=log+0.5;
  printf("Long: %li + 0.6 = %li\n", log, log2);
  
  long long llog=1;
  long long llog2=llog+0.99;
  printf("Long long: %lli + 0.99 = %lli\n", llog, llog2);
  
  float floa=0.000001;
  float floa2=floa/2.0;
  printf("Float: %f / 4 = %f\n", floa, floa2);
  
  double dl=0.000003;
  double dl2=dl/4.0;
  printf("Double: %f / 6 = %f\n", dl, dl2);
  
  long double ldl=0.00000000000000005;
  long double ldl2=dl/4.0;
  printf("Long double: %Lf / 4 = %Lf\n", ldl, ldl2);
  return 0;
}
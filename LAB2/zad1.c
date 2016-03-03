#include <stdio.h>

void dec_do_bin(int liczba)
{
  if(liczba > 0)
  {
    printf("%d", liczba%2); //wyświetlenie cyfry binarnej
    dec_do_bin(liczba/2);
  }
}

int main()
{
  char z;
  z = getchar();
  printf("\n");
  while(z!=EOF)
  {
    dec_do_bin(z);
    printf("\n");
    z = getchar();
  }
  return 0;





}

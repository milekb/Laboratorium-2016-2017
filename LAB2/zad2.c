#include <stdio.h>

void rozszyfrowanie(int liczba)
{
  int dzien=0, miesiac=0, rok=0;
  int l=0, tab[31]={}, n=1, i;

  while(liczba!=0)
  {
    tab[l]=liczba%2;
    liczba=liczba/2;
    l++;
  }

  for(i=0;i<5;i++)
  {
    if(tab[i])
    {
      dzien+=n;
      n=n*2;
    }
    else n=n*2;
  }
  n=1;

  for(i=5;i<9;i++)
  {
    if(tab[i])
    {
      miesiac+=n;
      n=n*2;
    }
    else n=n*2;
  }
  n=1;

  for(i=9;i<=31;i++)
  {
    if(tab[i])
    {
      rok+=n;
      n=n*2;
    }
    else n=n*2;
  }
  printf("%2.d-%2.d-%2.d", dzien, miesiac, rok);
  }

int main()
{
  int liczba;
  printf("Podaj liczbe do odszyfrowania\n");
  scanf("%d", &liczba);
  rozszyfrowanie(liczba);
  printf("\n");
}
//Odpowiedź: Data 01.01.2016

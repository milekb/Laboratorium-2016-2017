/* 
Napisać funkcję typu void, która ma:
* dwa całkowite parametry wejściowe n i k,
* dwa całkowite parametry wyjściowe:
 + q równy ilorazowi całkowitemu n przez k, oraz
 + r równy reszcie z dzielenia n przez k.
Ta funkcja nie może mieć żadnych innych parametrów, nie może odwoływać się do zmiennych globalnych i oczywiście nie może niczego czytać ani pisać;
jej jedyna komunikacja z resztą programu odbywa się przez parametry.
Napisać program, który wczytuje dwie liczby całkowite i wywołuje powyższą funkcję, a następnie drukuje iloraz całkowity oraz resztę z dzielenia wczytanych liczb.
*/
#include <stdio.h>
void rozgrzewka(int n, int k, int *q, int *r)
{
  *q=n/k;
  *r=n-k*(*q);
}
int main()
{
  int liczba1, liczba2, ilo, res;
  printf("Podaj dwie liczby, aby otrzymac iloraz i reszte.\n");
  scanf("%d %d", &liczba1, &liczba2); //Pobranie liczb
  rozgrzewka(liczba1, liczba2, &ilo, &res); //
  printf("Iloraz wynosi %d, natomiast reszta to %d\n",ilo,res);
  return 0;
}

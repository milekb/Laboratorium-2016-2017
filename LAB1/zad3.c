// Napisać programy testujące działanie operatorów z efektami ubocznymi w różnych sytuacjach, od których może zależeć wynik działania.
// Przykłady:
// a[i++]=0;  oraz  a[++i]=0;
// y=(x+=2);
// z=(x%=3)+(x%=4);

#include <stdio.h>
void wypisz_tab(int tab[], int size)
{
 	int i;
 	for(i=0;i<size;)
		printf("%d ", tab[i++]);
	printf("\n");
}
void podpunkt_a(int tab[], int a)
{
	int i,tmp;
	tmp=a;
	tab[a++]=0;
	a=tmp;
	tab[++a]=1;
	printf("\nSprawdzenie_1:\n");
	printf("tab[a++]=0, tab[++a]=1:\n");
  	for(i=0;i<6;++i)
    		printf("%d ", i);
	printf("\n");
	wypisz_tab(tab, 6);
	printf("To nie to samo!\n");
}
void podpunkt_b(int x)
{
  int y,z;
  printf("\nSprawdzenie_2, Sprawdzenie_3:\n");
  y=(x+=2);
  z=(x%=3)+(x%=4);
  printf("x=%d, y=%d, z=%d\n", x, y, z);
}
int main()
{
  int tab[5] = {1, 2, 3, 4, 5, 6};
  printf("Tabela:\n");
  wypisz_tab(tab, 6);
  podpunkt_a(tab, 3);
  podpunkt_b(5);
  return 0;
}
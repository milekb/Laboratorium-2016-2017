// Napisać:
// a)program w C, który wczytuje liczbę naturalną i przekazuje systemowi operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3;
// b)skrypt bashowy, który uruchamia powyższy program, przechwytuje wartość przekazaną systemowi i drukuje ją.

#include <stdio.h>
int main()
{
	int n;
	scanf("%i", &n);
	return n%3;
}
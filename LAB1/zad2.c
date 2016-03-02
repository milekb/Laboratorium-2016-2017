
// Napisać ,czysty' program, czyli bez efektów ubocznych, działający tak samo jak powyższa pętla for.

#include <stdio.h>

int main()
{
	char z;
	a = getchar();
	while(z!=EOF)
	{
		printf("%c", a);
   		a = getchar();
	}
	return 0;
}

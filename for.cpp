#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 65; a <= 90; a++)
	{
		b = a + 32;
		printf("%c-->%c\n", a, b);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	switch (c)
	{
	case 'A':
	case 'a':
		printf("A-->a");
		break;
	case 'B':
	case 'b':
		printf("B-->b");
		break;
	default:
		printf("not a&b");
	}
	return 0;
}
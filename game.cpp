#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, b, c;
	srand(time(0));
	a = rand() % 1000;
	printf("请输入三位数\n");
	for (b = 0; b < 7; b++)
	{
		scanf("%d", &c);
		if (a > c)
		{
			printf("small\n");
		}
		if (a < c)
		{
			printf("big\n");
		}
		if (a == c)
		{
			printf("win\n");
		}
	}
	if (b == 7)
	{
		printf("lose\n%d", a);
	}
	return 0;
}
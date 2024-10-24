#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("ÇëÊäÈëa b c\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (c > a)
		{
			printf("%d>%d>%d",c,a,b);
		}
		else
		{
			if(c>b)
				printf("%d>%d>%d", a,c,b);
			else
				printf("%d>%d>%d", a,b,c);
		}
	}
	else
	{
		if (c > b)
		{
			printf("%d>%d>%d",c,b,a);
		}
		else
		{
			if(c>a)
				printf("%d>%d>%d",b,c,a );
			else
				printf("%d>%d>%d",b,a,c );
		}
	}
	return 0;
}
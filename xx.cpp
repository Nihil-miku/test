#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, root1, root2, n;
	scanf("%f %f %f", &a, &b, &c);
	n = b * b - 4*a*c;
	if (n > 0)
	{
		root1 = (-b + sqrt(n)) / (2 * a);
		root2 = (-b - sqrt(n)) / (2 * a);
		printf("root1=%f root2=%f", root1, root2);
	}
	else if(n==0)
	{
		root1 = (-b) / (2 * a);
		printf("root1=root2=%f", root1);
	}
	else
	{
		printf("此方程无实数解");
	}
	return 0;
}
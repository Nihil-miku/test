#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int j,w,i,u ;
	//作业1
	/*for (w=9; w >0; w = w-2)
	{
		for (j = w; j >2; j = j - 2)
		{
			printf(" ");
		}
		for (int i = 1; i <11-w; i = i +1)
		{
			printf("*");
		}
		printf("\n");
	}*/
	//作业2
	/*for (w = 0; w < 10; w++)
	{
		for (i = -1; i < w; i++)
		{
			printf("*");
		}
		for (j = 1; j < 10-w; j++)
		{
			printf("o");
		}
		printf("\n");
	}*/
	//作业3
	/*for (w = 0; w < 10; w++)
	{
		for (i = 0;i < 10-w; i++)
		{
			printf("*");
		}
		for (j = 0 ; j < w;j++)
		{
			printf("o");
		}
		printf("\n");
	}*/
	//作业4
	for (w = 8; abs(w) < 9; w = w - 2)
{
	for (j = 0; j < abs(w) / 2; j = j + 1)
	{
		printf(" ");
	}
	for (i = 0;i<9-abs(w) ; i =i+ 1)
	{
		printf("*");
	}
	printf("\n");
}
	
}
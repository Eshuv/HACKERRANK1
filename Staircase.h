#pragma once

#include <stdio.h>

void staircase(int n)
{
	int space = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < space; j++)
		{
			printf(" ");
		}
		space = space - 1;
		for (int j = 0; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

int main()
{
	int n = 6;

	staircase(n);
}

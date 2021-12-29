#pragma once

#include <stdio.h>

void min_MaxSum(int n, int arr[])
{
	int min = 0, max = 0;
	for (int i = 0; i < 5; i++)
	{
		min = min + arr[i];
	}
	for (int j = n - 1; j > n - 5; j--)
	{
		max = max + arr[j];
	}
	printf("%d %d", min, max);
}

void bubbleSort(int n, int arr[])
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int const n = 6;
	int arr[n] = { 1,3,5,7,9 };

	bubbleSort(n, arr);

	min_MaxSum(n, arr);
}

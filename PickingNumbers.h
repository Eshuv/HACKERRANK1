#pragma once

#include <stdio.h>
#include <math.h>

int pickingNumbers(int n, int arr[])
{
	int count = 0, count1;
	for (int i = 0; i < n; i++)
	{
		count1 = 0;
		for (int j = i; j < n; j++)
		{
			if ((abs(arr[i] - arr[j]) <= 1))
			{
				count1++;
			}
		}
		if (count < count1)
		{
			count = count1;
		}
	}
	return count;
}

void bubbleSort(int n, int arr[])
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i -1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int size, int arr[])
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int const n  = 6;
	int arr[] = { 1, 2, 2, 3, 1, 2 };

	printArray(n, arr);

	bubbleSort(n, arr);

	printArray(n, arr);

	int ret = pickingNumbers(n, arr);
	printf("\n%d", ret);
}

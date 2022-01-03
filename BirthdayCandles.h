#pragma once

#include <stdio.h>

int BirthdayCandles(int arr[], int sz)
{
	int max = 0;
	int count = 0;

	for (int i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == max)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int arr[] = { 3,2,1,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int ret = BirthdayCandles(arr, sz);
	printf("%d", ret);
}

#pragma once

#include <stdio.h>

int plusMinus(int arr_count, int arr[])
{
	float count1 = 0, count2 = 0, count3 = 0;
	float ar[3] = { 0, };

	for (int i = 0; i < arr_count; i++)
	{
		if (arr[i] < 0)
		{
			count1++;
		}
		else if (arr[i] == 0)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	ar[0] = count3/arr_count;
	ar[1] = count1/arr_count;
	ar[2] = count2/arr_count;

	for (int i = 0; i < 3; i++)
	{
		printf("%f \n", ar[i]);
	}
	return 0;
}

int main()
{
	int const arr_count = 6;
	int arr[] = { -4, 3, -9, 0, 4, 1 };

	plusMinus(arr_count, arr);
}

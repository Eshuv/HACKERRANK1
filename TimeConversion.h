#pragma once

#include <stdio.h>

char* timeCoversion(char arr[])
{
	if (arr[8] == 'P' && arr[9] == 'M')
	{
		if (arr[0] != '1' || arr[1] != '2')
		{
			arr[0] = arr[0] + 1;
			arr[1] = arr[1] + 2;
		}
	}
	else
	{
		if (arr[0] == '1' &&  arr[1] == '2')
		{
			arr[0] = '0';
			arr[1] = '0';
		}
	}
	arr[8] = '\0';
	printf("%s", arr);
	return arr;
}

int main()
{
	char arr[] = "12:45:54PM";

	timeCoversion(arr);
}

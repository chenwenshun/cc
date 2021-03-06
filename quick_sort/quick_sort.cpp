// quick_sort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void quick_sort(int arr[],int start, int end)
{
	int low = start;
	int height = end;
	int key = arr[low];
	if (start >= end)
		return;
	while (low < height)
	{
		while (low < height && key <= arr[height])
			height--;
		if (low < height)
			arr[low++] = arr[height];
		while (low < height && key >= arr[low])
			low++;
		if (low < height)
			arr[height--] = arr[low];		
	}
	arr[low] = key;
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	//while(low+1 < end)
	quick_sort(arr, low + 1, end);
	//while (low - 1 > start)
	quick_sort(arr, start, low - 1);



}



int main()
{
	int arr[10] = {15,324,35,234,532,45,235432,34,3,5};
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	quick_sort(arr, 0, 9);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
    return 0;
}


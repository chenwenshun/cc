// inser_sort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>

void  inser_sort(int arr[], int len)
{
	int key;
	for (int i = 0; i < len-1; i++)
	{
		//15,324,35,234,532,45,235432,34,3,5
		key = arr[i+1];
		
		for (int j = i+1; j > 0; j--)
		{
			if (key< arr[j-1])
			{
				arr[j] = arr[j - 1];
				arr[j-1] = key;
				
			}
			
		}
		
		
	

		for (int k = 0; k < 10; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
}

int main()
{
	int arr[10] = { 15,324,35,234,532,45,235432,34,3,5 };
	int i;
	
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");
	inser_sort(arr, 10);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
    return 0;
}


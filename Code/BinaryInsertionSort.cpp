#include "Algorithm.h"
int binarySearch(int *arr, int l, int r, int key)
{
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] == key)
		{
			return mid + 1;
		}
		if (l == r)
		{
			if (arr[l] <= key)
			{
				return l + 1;
			}
			else
			{
				return l;
			}
		}
		else if (arr[mid] > key)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
}
void BinaryInsertionSort(int *arr, int n)
{
	for (int i = 1; i < n; ++i)
	{
		int pos = binarySearch(arr, 0, i - 1, arr[i]);
		int temp = arr[i];
		int j = i - 1;
		while (j >= pos)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[pos] = temp;
	}
}

#include "Algorithm.h"
#include <cstdint>
void Merge(int *arr, int p, int q, int r)
{
	int *a = new int[q - p + 2];
	int *b = new int[r - q + 1];
	for (int i = p; i <= q; i++)
	{
		a[i - p] = arr[i];
	}
	for (int j = q + 1; j <= r; j++)
	{
		b[j - q - 1] = arr[j];
	}
	a[q - p + 1] = INT32_MAX;
	b[r - q] = INT32_MAX;
	int l = 0, t = 0;
	for (int i = p; i <= r; ++i)
	{
		if (a[l] <= b[t])
		{
			arr[i] = a[l];
			++l;
		}
		else
		{
			arr[i] = b[t];
			++t;
		}
	}
	delete[] a;
	delete[] b;
}
void MergeSort(int *arr, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		MergeSort(arr, p, q);
		MergeSort(arr, q + 1, r);
		Merge(arr, p, q, r);
	}
}
#include "Algorithm.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
int partition(int *arr, int p, int r)
{
	srand(time(NULL));
	int random = p + rand() % (r - p);
	swap(arr[random], arr[p]);

	int pivot = arr[p];
	int j = p;
	for (int i = p + 1; i <= r; ++i)
	{
		if (arr[i] <= pivot)
		{
			j += 1;
			std::swap(arr[j], arr[i]);
		}
	}
	std::swap(arr[j], arr[p]);
	return j;
}
void QuickSort(int *arr, int p, int r)
{
	if (p < r)
	{
		int m = partition(arr, p, r);
		QuickSort(arr, p, m - 1);
		QuickSort(arr, m + 1, r);
	}
}
#include "Algorithm.h"
#include <algorithm>
using namespace std;
int left_child(int i)
{
	return 2 * i + 1;
}
int right_child(int i)
{
	return 2 * i + 2;
}
void SiftDown(int *arr, int i, int n)
{
	int maxIndex = i;
	int left = left_child(i);
	int right = right_child(i);
	if (left < n && arr[left] > arr[maxIndex])
	{
		maxIndex = left;
	}
	if (right < n && arr[right] > arr[maxIndex])
	{
		maxIndex = right;
	}
	if (maxIndex != i)
	{
		swap(arr[i], arr[maxIndex]);
		SiftDown(arr, maxIndex, n);
	}
}
void BuildHeap(int *arr, int n)
{
	for (int i = n / 2 - 1; i >= 0; --i)
	{
		SiftDown(arr, i, n);
	}
}
void ExtractMax(int *arr, int &size, int n)
{
	swap(arr[0], arr[size - 1]);
	size -= 1;
	SiftDown(arr, 0, size);
}
void HeapSort(int *arr, int n)
{
	int size = n;
	for (int i = 0; i < n; ++i)
	{
		ExtractMax(arr, size, n);
	}
}

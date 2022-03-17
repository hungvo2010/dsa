#include "Algorithm.h"
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void ShakerSort(int* arr, int n) {
	bool swapped = true;
	int start = 0;
	int end = n - 1;
	int newEnd{}, newStart{};
	while (swapped) {
		swapped = false;
		for (int i = start; i < end; ++i) {
			if (arr[i] > arr[i + 1]) {
				newEnd = i;
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
		end = newEnd;
		swapped = false;
		for (int i = end-1; i >= start; --i) {
			if (arr[i] > arr[i + 1]) {
				newStart = i;
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		start = newStart+1;
	}
}
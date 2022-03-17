#include "Algorithm.h"
#include <cmath>
#include <algorithm>
int digit(int n, int k) {
	int r = 0;
	while (k > 0) {
		if (n == 0) return n;
		r = n % 10;
		n /= 10;
		k--;
	}
	return r;
}
void CountingRadixSort(int* arr, int n, int k) {
	int* L = new int[10]{ 0 };
	for (int i = 0; i < n; ++i) {
		L[digit(arr[i], k)]++;
	}
	for (int i = 1; i < 10; ++i) {
		L[i] += L[i - 1];
	}
	int* temp = new int[n];
	for (int i = n-1; i >=0; --i) {
		int j = digit(arr[i], k);
		temp[L[j] - 1] = arr[i];
		L[j]--;
	}
	for (int i = 0; i < n; ++i) {
		arr[i] = temp[i];
	}
	delete[] temp;
	delete[] L;
}
void RadixSort(int* arr, int n) {
	int max = *std::max_element(arr, arr + n);
	int d = floor(log10(max)) + 1;
	for (int i = 1; i <= d; ++i) {
		CountingRadixSort(arr, n, i);
	}
}

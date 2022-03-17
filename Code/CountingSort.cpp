#include "Algorithm.h"
#include <algorithm>
using namespace std;
void CountingSort(int* arr, int n) {
	int max = *max_element(arr, arr + n);
	int min = *min_element(arr, arr + n);
	int size = max - min + 1;
	int* L = new int[size] {};
	for (int i = 0; i < n; ++i) {
		++L[arr[i] - min];
	}
	for (int i = 1; i < size; ++i) {
		L[i] += L[i - 1];
	}
	int* b = new int[n];
	for (int i = n - 1; i >= 0; --i) {
		b[L[arr[i]-min] - 1] = arr[i];
		L[arr[i] - min]--;
	}	
	for (int i = 0; i < n; ++i) {
		arr[i] = b[i];
	}
}

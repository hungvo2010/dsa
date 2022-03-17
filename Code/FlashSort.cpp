#include "Algorithm.h"
#include <algorithm>
#include <cmath>
using namespace std;
int id(int x,int min,int max,int m) {
	int k = floor((m - 1) *1.0* (x - min)/ (max - min))+1;
	return k;
}
int* GroupElement(int* arr, int n, int m) {
	int* L = new int[m + 1]{ 0 };
	int min = *min_element(arr, arr + n);
	int max = *max_element(arr, arr + n);
	for (int i = 0; i < n; ++i) {
		L[id(arr[i], min, max, m)]++;
	}
	for (int i = 1; i <= m; ++i) {
		L[i] += L[i - 1];
	}
	return L;
}
int* RearrangeElement(int* arr, int n, int m) {
	int* L = GroupElement(arr, n, m);
	int min = *min_element(arr, arr + n);
	int max = *max_element(arr, arr + n);
	int count = 0;
	int i = 0;
	int k = m;
	int x, y;
	while (count < n) {
		while (i > L[k] - 1) {
			i++;
			k = id(arr[i], min, max, m);
		}
		x = arr[i];
		while (i <= L[k] - 1) {
			k = id(x, min, max, m);
			y = arr[L[k] - 1];
			arr[L[k] - 1] = x;
			x = y;
			L[k]--;
			count++;
		}
	}
	return L;
}
void FlashSort(int* arr, int n, int m) {
	int* L = RearrangeElement(arr, n, m);
	for (int k = 2; k <= m; ++k) {
		for (int i = L[k] - 2; i > L[k - 1] - 1; --i) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				int j = i;
				while (temp > arr[j + 1]) {
					arr[j] = arr[j + 1];
					j++;
				}
				arr[j] = temp;
			}
		}
	}
}

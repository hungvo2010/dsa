#include "Algorithm.h"
#include <iostream>
using namespace std;
void GenerateFunction(int* arr,int n,int type) {
	switch (type)
	{
	case 0:
		SelectionSort(arr, n); break;
	case 1:
		InsertionSort(arr, n); break;
	case 2:
		BinaryInsertionSort(arr, n); break;
	case 3:
		BubbleSort(arr, n); break;
	case 4:
		ShakerSort(arr, n); break;
	case 5:
		shellSort(arr, n); break;
	case 6:
		HeapSort(arr, n); break;
	case 7:
		MergeSort(arr, 0, n - 1); break;
	case 8:
		QuickSort(arr, 0, n - 1); break;
	case 9:
		CountingSort(arr, n); break;
	case 10:
		RadixSort(arr, n); break;
	case 11:
		FlashSort(arr, n, floor(0.43 * n)); break;
	default:
		break;
	}
}
void GenerateDataTypeOutput(int i) {
	switch (i)
	{
	case 0: cout << "RANDOM DATA\n"; break;
	case 1: cout << "SORTED DATA\n"; break;
	case 2: cout << "REVERSE SORTED DATA\n"; break;
	case 3: cout << "NEARLY SORTED DATA\n"; break;
	default:
		break;
	}
}
void GenerateSortType(int i) {
	switch (i)
	{
	case 0: cout << "Selection Sort: \t"; break;
	case 1: cout << "Insertion Sort: \t"; break;
	case 2: cout << "Binary Insertion Sort: \t"; break;
	case 3: cout << "Bubble Sort: \t\t"; break;
	case 4: cout << "Shaker Sort: \t\t"; break;
	case 5: cout << "Shell Sort: \t\t"; break;
	case 6: cout << "Heap Sort: \t\t"; break;
	case 7: cout << "Merge Sort: \t\t"; break;
	case 8: cout << "Quick Sort: \t\t"; break;
	case 9: cout << "Counting Sort: \t\t"; break;
	case 10: cout << "Radix Sort: \t\t"; break;
	case 11: cout << "Flash Sort: \t\t"; break;
	default:
		break;
	}
}
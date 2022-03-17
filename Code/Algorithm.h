#pragma once
#include "DataGenerator.h"
#include "Timer.h"
// Selection Sort
void SelectionSort(int *arr, int n);

// Insertion Sort
void InsertionSort(int *arr, int n);

// Binary Insertion Sort
int binarySearch(int *arr, int l, int r, int key);
void BinaryInsertionSort(int *arr, int n);

// Bubble Sort
void BubbleSort(int *arr, int n);

// Shaker Sort
void ShakerSort(int *arr, int n);

// Shell Sort
void shellSort(int arr[], int n);

// Heap Sort
int left_child(int i);
int right_child(int i);
void SiftDown(int *arr, int i, int n);
void BuildHeap(int *arr, int n);
void ExtractMax(int *arr, int &size, int n);
void HeapSort(int *arr, int n);

// Merge Sort
void Merge(int *arr, int p, int q, int r);
void MergeSort(int *arr, int p, int r);

// Quick Sort
void swap(int &a, int &b);
int partition(int *arr, int p, int r);
void QuickSort(int *arr, int p, int r);

// Counting Sort
void CountingSort(int *arr, int n);

// Radix Sort
int digit(int n, int k);
void CountingRadixSort(int *arr, int n, int k);
void RadixSort(int *arr, int n);

// Flash Sort
int id(int x, int min, int max, int m);
int *GroupElement(int *arr, int n, int m);
int *RearrangeElement(int *arr, int n, int m);
void FlashSort(int *arr, int n, int m);

void GenerateFunction(int *arr, int n, int type);
void GenerateDataTypeOutput(int i);
void GenerateSortType(int i);

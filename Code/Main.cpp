#include <iostream>
#include "Algorithm.h"
using namespace std;
int main() {
	int size[] = { SMALL,MEDIUM,LARGE,BIG,VERYBIG };
	int dataType = 4;
	int numSort = 12;
	int numSize = 5;
	int* arr = nullptr;
	int n{};
	for (int i = 0; i < dataType; ++i) {
		GenerateDataTypeOutput(i);
		for (int j = 0; j < numSort; ++j) {
			GenerateSortType(j);
			for (int k = 0; k < numSize; ++k) {
				n = size[k];
				if (arr) delete[] arr;
				arr = new int[n];
				GenerateData(arr, n, i);
				Timer t;
				GenerateFunction(arr, n, j);
				printf("%.9lf\t", t.elapsed());
			}
			cout << endl;
		}
	}
	


	return 0;
}
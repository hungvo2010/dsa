#include "Algorithm.h"
void SelectionSort(int* arr,int n){
    for(int i=0;i<n-1;++i){
        int min=arr[i];
        int idx=i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
    }
}
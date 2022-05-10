#pragma once
#include<iostream>
using namespace std;

void countSort(int arr[],int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int* count = new int[max+1];
	for(int i=0;i<max+1;i++)
	*(count + i) = 0;
	for (int i = 0; i < size; i++) {
		int temp = arr[i];
		* (count + temp) = *(count + temp) + 1;
	}
	for (int i = 0; i < max + 1; i++) {
		cout << *(count + i) << " ";
	}
	cout << endl;
		int j = 0;
	for (int i = 0; i < max+1; i++) {
		while (*(count + i) > 0) {
			arr[j] = i;
			*(count + i) = *(count + i) - 1; j++;
		}
	}
	cout << "Array after count sort algorithm is : " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}


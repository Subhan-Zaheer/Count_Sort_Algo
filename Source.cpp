#include"Header.h"
#define SIZE 7
void main() {
	int arr[SIZE];
	cout << "Enter data for this array : " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}
	countSort(arr, SIZE);
}
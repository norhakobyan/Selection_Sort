#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
	}
	int min = 0;	
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (i != min) {
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}

	for (int i = 0; i < size; i++) {
		cout << "[" << arr[i] << "] ";
	}
	cout << endl;
}
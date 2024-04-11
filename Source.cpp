#include <iostream>
using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjacentDuplicates(int array[], int size);
bool hasDuplicates(int array[], int size);

int main() {

	const int size = 6;
	int array[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter integer #" << i << ": ";
			cin >> array[i];
	}

	if (isSortedIncreasing(array, 6)) {
		cout << "The data is increasing " << endl;
	}
	else {
		cout << "The data is not increasing" << endl;
	}

	if (isSortedDecreasing(array, 6)) {
		cout << "The data is decreasing " << endl;
	}
	else {
		cout << "The data is not decreasing" << endl;
	}
	
	if (hasAdjacentDuplicates(array, 6)) {
		cout << "The data has adjacent duplicates " << endl;
	}
	else {
		cout << "The data does not have adjecent duplicates" << endl;
	}

	if (hasDuplicates(array, 6)) {
		cout << "The data has duplicates " << endl;
	}
	else {
		cout << "The data does not have duplicates" << endl;
	}
}

bool isSortedIncreasing(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int array[], int size) {
	for (int i = 0; i < size - 1;i++) {
		if (array[i] < array[i + 1]) {
			return false;
		}
	}
	return true;
}

bool hasAdjacentDuplicates(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] == array[i + 1]) {
			return true;
		}
	}
	return false;
}

bool hasDuplicates(int array[], int size) {
	for (int i = 0; i < size; i++) {
		for (int k = i + 1; k < size; k++) {
			if (array[i] == array[k]) {
				return true;
			}
		}
	}
	return false;
}

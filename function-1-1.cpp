#include <iostream>

using namespace std;

int* shift_right(int* vals, int len, int amount) {
	int* new_arr = new int[len];

	for (int n = 0; n < amount; n++) {
		new_arr[n] = 0;
		new_arr[n + amount] = vals[n];
	}

	for (int m = 0; m < len - amount; m++) {
		new_arr[m + amount] = vals[m];
	}

	return new_arr;
}
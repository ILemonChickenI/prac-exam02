#include <iostream>

using namespace std;

int count_numbers_in_range(int vals[], int length, int bottom, int top) {
	int count = 0;
	for (int n = 0; n < length; n++) {
		if (bottom <= vals[n] && vals[n] <= top) {
			count++;
		}
		else {
			continue;
		}
	}
	return count;
}
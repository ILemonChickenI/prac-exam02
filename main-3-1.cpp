#include <iostream>
#include "function-3-1.h"

using namespace std;

int main() {
	int my_val[] = { 1,7,3,4,6,5,2 };
	cout << "The count of numbers in range is:" << count_numbers_in_range(my_val, 7, 3, 6) << endl;

	int my_val2[] = { 5,7,6,2,1,4 };
	cout << "The count of numbers in range is:" << count_numbers_in_range(my_val, 6, 2, 5);
}
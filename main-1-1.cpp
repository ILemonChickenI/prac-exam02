#include <iostream>
#include "function-1-1.h"
using namespace std;


int main() {
	int my_val[5] = { 1,2,3,4,5 };

	for (int n = 0; n < 5; n++) {
		cout << " " << shift_right(my_val, 5, 2)[n];
	}
}
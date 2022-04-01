#include <iostream>

using namespace std;

int lookup_speeding_fine(int over) {

	if (over <= 0) {
		cout << "My speeding fine is: 0";
	}
	else if (0 < over && over < 10) {
		cout << "My speeding fine is: 180";
	}
	else if (10 <= over && over < 20) {
		cout << "My speeding fine is: 406";
	}
	else if (20 <= over && over < 30) {
		cout << "My speeding fine is: 825";
	}
	else if (30 <= over && over < 40) {
		cout << "My speeding fine is: 1500";
	}
	else if (over >= 45) {
		cout << "My speeding fine is: 1690";
	}
	return 0;
}
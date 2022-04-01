#include <iostream>
#include "function-2-1.h"

using namespace std;

int main() {
	string n = "Y";
	int over_SPD;

	while (n == "Y") {
		cout << endl;
		cout << "Do you wish to continue? :";
		cin >> n;
		if (n == "Y") { //type "Y" to continue
			cout << "Please enter your over speed: ";
			cin >> over_SPD;
			lookup_speeding_fine(over_SPD);
		}
		else if (n == "N") { //type "N" to quit
			break;
		}
	}
}


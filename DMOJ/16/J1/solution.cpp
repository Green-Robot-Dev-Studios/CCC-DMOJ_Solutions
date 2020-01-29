#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string input;
int w = 0;

int main()
{
	for (int x = 0; x < 6; x++) {
		cin >> input;
		if (input == "W") {
			w++;
		}
	}
	if (w == 0) {
		cout << "-1";
	}
	else if (w == 1 || w == 2) {
		cout << "3";
	}
	else if (w == 3 || w == 4) {
		cout << "2";
	}
	else if (w == 5 || w == 6) {
		cout << "1";
	}
	return 0;
}

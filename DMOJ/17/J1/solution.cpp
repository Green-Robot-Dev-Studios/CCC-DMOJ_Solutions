#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int x, y;

int main()
{
	cin >> x;
	cin >> y;

	if (x > 0 && y > 0) {
		cout << "1";
	}
	else if (x < 0 && y > 0) {
		cout << "2";
	}
	else if (x < 0 && y < 0) {
		cout << "3";
	}
	else if (x > 0 && y < 0) {
		cout << "4";
	}

	return 0;
}

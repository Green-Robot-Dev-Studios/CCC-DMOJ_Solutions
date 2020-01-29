#include <iostream>

using namespace std;
int limit;
int speed;
int over;

int main()
{
	cin >> limit;
	cin >> speed;

	if (speed <= limit) {
		cout << "Congratulations, you are within the speed limit!";
	}
	else {
		over = speed - limit;
		int fine = 100;
		if (over >= 31) {
			fine = 500;
		}
		else if (over >= 21) {
			fine = 270;
		}
		cout << "You are speeding and your fine is $" << fine << ".";
	}

	return 0;
}

#include <iostream>

using namespace std;

float weight;
float height;
float bmi;

int main()
{
	cin >> weight;
	cin >> height;

	bmi = weight / (height * height);
	//cout << bmi;
	if (bmi > 25) {
		cout << "Overweight";
	}
	else if (bmi < 18.5) {
		cout << "Underweight";
	}
	else {
		cout << "Normal weight";
	}
	return 0;
}

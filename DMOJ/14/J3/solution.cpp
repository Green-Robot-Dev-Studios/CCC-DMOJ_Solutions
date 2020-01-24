#include <iostream>
#include <string>
#include <vector>
#include <string>
using namespace std;

int rolls;
int counter1 = 100, counter2 = 100;
//vector<int> inputs;
int main(){

	cin >> rolls;
	for (int x = 0; x < rolls; x ++){
		int roll1, roll2;
		cin >> roll1;
		cin >> roll2;
		if (roll1 < roll2) {
		
			counter1 -= roll2;

		} else if (roll2 < roll1) {

			counter2 -= roll1;

		}

	}
	cout << counter1 << endl << counter2;
	int _;
	cin >> _;
}

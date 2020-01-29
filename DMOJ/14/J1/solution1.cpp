#include <iostream>
using namespace std;

int angle1;
int angle2;
int angle3;
int total;
int _;

int main(){
	cin >> angle1;
	cin >> angle2;
	cin >> angle3;
	total = angle1 + angle2 + angle3;
	if (total != 180) {
		cout << "Error" << endl;
	} else {
		if (angle1 == angle2 && angle2 == angle3) {
			cout << "Equilateral" << endl;
		} else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3){
			cout << "Isosceles" << endl;
		} else if (!(angle1 == angle2) || !(angle1 == angle3) || !(angle2 == angle3)) {
			cout << "Scalene" << endl;
		}
	}
	
	cin >> _;
	return 0;
}

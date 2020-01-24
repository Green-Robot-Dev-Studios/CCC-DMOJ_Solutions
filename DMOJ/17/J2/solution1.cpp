#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int n;
int k;
int shift;
int total = 0;

int main(){
	cin >> n;
	cin >> k;

	for (int x = 0; x < k + 1; x++) {
		double y = x;
		//cout << total << endl;
		shift = n * pow(10, y);
		total = shift + total;
	}
	cout << total;
	int _;
	cin >> _;
}

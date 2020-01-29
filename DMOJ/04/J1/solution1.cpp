#include <iostream>
#include <math.h>

using namespace std;
int input;

int main()
{
	cin >> input;

	cout << "The largest square has side length " << floor(sqrt(input)) << ".";
	return 0;
}

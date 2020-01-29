#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int size = 3;
	int arr[3];

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];

	sort(arr, arr+size);
	cout << arr[1];
}

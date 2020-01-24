#include <iostream>
using namespace std;

int main() {
  long long int n, r = 3;
  cin >> n;
  n-=1;
  cout << ((n)*(n-1)*(n-2))/6;
}

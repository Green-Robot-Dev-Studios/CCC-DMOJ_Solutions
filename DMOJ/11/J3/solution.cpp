#include <iostream>
using namespace std;
int first, second, temp, counter = 2;
int solve(int a, int b) {
  if (a < b) return -1;
  temp = a - b;
  a = b;
  b = temp;
  counter++;
  solve(a, b);
  return counter;
}
int main() {
  cin >> first >> second;
  cout << solve(first, second);
}

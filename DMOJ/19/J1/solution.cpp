#include <iostream>
using namespace std;
int main() {
  //define variables for all point types
  int A1, A2, A3;
  int B1, B2, B3;
  //take input for each one
  cin >> A3 >> A2 >> A1;
  cin >> B3 >> B2 >> B1;
  //define both sums
  int sumA, sumB;
  sumA = A3 * 3 + A2 * 2 + A1;
  sumB = B3 * 3 + B2 * 2 + B1;
  //logic to see who won
  if (sumA > sumB){ //if A wins
    cout << "A";
  } else if (sumB > sumA){ // if B wins
    cout << "B";
  } else { // if it is a tie
    cout << "T";
  }
}

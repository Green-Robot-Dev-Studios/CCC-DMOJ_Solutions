#include <iostream>
using namespace std;
int main() {
  //define the number of lines to encode
  int numOfLines;
  cin >> numOfLines;
  //loop that many times
  for (int i = 0; i < numOfLines; i++){
    int key;
    char value;
    cin >> key >> value;
    for (int ii = 0; ii < key; ii++){
      cout << value;
    }
    cout << endl;
  }
}

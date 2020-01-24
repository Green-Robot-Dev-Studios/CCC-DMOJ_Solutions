#include <iostream>
#include <string>
using namespace std;

int main() {
  string in1[30];
  string in2[30];
  int words;
  cin >> words;
  for (int i = 0; i < words; i++){
    cin >> in1[i];
  }
  for (int i = 0; i < words; i++){
    cin >> in2[i];
  }
  for (int i = 0; i < words; i++){
    if (in1[i] == in2[i]){
      cout << "bad";
      return 0;
    } 
    for (int ii = 0; ii < i; ii++){
      if (in2[ii] == in1[i]){
        //cout << in2[ii] << " is equal to " << in1[i] << endl;
        if (in1[ii] != in2[i]){
          //cout << in1[ii] << " is equal to " << in2[i] << endl;
          cout << "bad";
          return 0;
        }
      }
    }
  }
  cout << "good";
}

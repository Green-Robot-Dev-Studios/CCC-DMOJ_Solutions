#include <iostream>
#include <string>
using namespace std;

int main() {
  int numOfLines;
  cin >> numOfLines;
  for (int i = 0; i < numOfLines; i++){
    string line;
    cin >> line;
    int counter = 1;
    char previous = line[0];
    for (int ii = 1; ii < (int)line.size()+1; ii++){
      if (line[ii]==previous){
        counter++;
        continue;
      } 
      cout << counter << " " << previous << " ";
      counter = 1;
      previous = line[ii];
    }
    cout << endl;
  }
}

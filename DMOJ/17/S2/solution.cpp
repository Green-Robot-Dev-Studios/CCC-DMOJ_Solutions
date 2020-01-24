#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int measurements;
vector<int> measures;
int main() {
  cin >> measurements;

  for (int x = 0; x < measurements; x++){
    int _;
    cin >> _;
    measures.push_back(_);
  }
  sort(measures.begin(), measures.end());

  
  if (measurements % 2 == 0){
    for (int x = 0; x < measurements / 2; x++){
      cout << measures[measurements / 2 - x - 1];
      cout << " " << measures[x + measurements / 2] << " ";
    }
  } else {
    for (int x = 0; x < measurements / 2; x++) {
      cout << measures[measurements / 2 - x];
      cout << " " << measures[x + measurements / 2 + 1] << " ";
    }
    cout << measures[measures[measurements]];
  }
}

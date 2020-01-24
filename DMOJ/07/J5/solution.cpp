#include <iostream>
using namespace std;
int main() {
  bool stops[7001] = {0};

  stops[0] = true;
  stops[990] = true;
  stops[1010] = true;
  stops[1970] = true;
  stops[2030] = true;
  stops[2940] = true;
  stops[3060] = true;
  stops[3930] = true;
  stops[4060] = true;
  stops[4970] = true;
  stops[5030] = true;
  stops[5990] = true;
  stops[6010] = true;
  stops[7000] = true;

  long long int ways[7001] = {0};
  ways[0] = 1;
  long long int miin, maax;
  cin >> miin >> maax;
  long long int extraStops;
  cin >> extraStops;
  for (int i = 0; i < extraStops; i++){
    int _;
    cin >> _;
    stops[_] = true;
  }
  int a, b;
  for (int i = 0; i <= 7000; i++){
    if (stops[i]){
      a = i-maax;
      if (a < 0){
        a = 0;
      }
      b = i-miin;
      //cout << i << " " << a << " " << b << endl;
      for (int j = a; j <= b; j++){
        ways[i] += ways[j];
      }
      //cout << ways[i] << endl;
    }
  }
  cout << ways[7000] << endl;
}

#include <iostream>
using namespace std;
int main() {
  int maax, cars, carsList[100006];
  cin >> maax >> cars;
  for (int i = 0; i < cars; i++){
    cin >> carsList[i];
  }
  for (int i = 4; i <= cars+4; i++){
    int totes = 0;
    for (int ii = i-4; ii < i; ii++){
      if (ii < 0){
        continue;
      }
      totes += carsList[ii];
      if (totes > maax){
        cout << ii;
        return 0;
      }
    }
  }
}

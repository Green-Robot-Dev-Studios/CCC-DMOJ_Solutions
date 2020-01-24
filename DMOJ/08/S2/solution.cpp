#include <iostream>
#include <math.h>
using namespace std;
int main() {
  while (true){
    int n;
    cin >> n;
    if (n==0){
      return 0;
    } else {
      int n2 = n * n;
      int ans = 0;
      for (int i = 0; i <= n; i++){
        ans += sqrt(n2 - (i*i));
      }
      cout << 4 * ans + 1 << endl;
    }
  }
}

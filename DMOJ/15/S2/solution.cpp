#include <iostream>
using namespace std;
int main() {
  int j, a, __, ans = 0;
  char _, athletes[1000006];
  cin >> j >> a;
  for (int i = 0; i < j; i++){
    cin >> _;
    if (_ == 'S') athletes[i] = 'S';
    if (_ == 'M') athletes[i] = 'M';
    if (_ == 'L') athletes[i] = 'L';
  }
  for (int i = 0; i < j; i++){
    cin >> _ >> __;//M 2
    if(athletes[__-1]==_){
      //cout << athletes[__-1] << " " << __ << endl;
      ans++;
      athletes[__-1] = 'N';
    } else if((athletes[__-1]=='M' && _ == 'S') || (athletes[__-1]=='L' && _ == 'S') || (athletes[__-1]=='L' && _ == 'M')){
      //cout << athletes[__-1] << " " << __ << endl;
      ans++;
      athletes[__-1] = 'N';
    }
  }
  cout << ans;
}

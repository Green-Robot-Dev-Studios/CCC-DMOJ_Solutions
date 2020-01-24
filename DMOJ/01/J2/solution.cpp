#include <iostream>
using namespace std;
int x, m, ans;
int solve(int modulo){
  if (modulo==0)return 0;
  if (x*modulo%m==1)return modulo;
  return solve(modulo-1);
}
int main() {
  cin >> x >> m;
  ans = solve(m);
  if (ans > 0){
    cout << ans;
  } else {
    cout << "No such integer exists.";
  }
}

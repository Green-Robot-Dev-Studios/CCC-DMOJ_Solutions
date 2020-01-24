#include <iostream>
using namespace std;
int target, clubs[1000000], _, num_of_clubs, calced[1000000], value[1000000], ans;
const int INF = 1000000;
int solve(int x) {

  //cout << x << endl;
  if (x < 0) return INF;
  if (x == 0) return 0;
  if (calced[x] == 6) return value[x];
  int best = INF;

  for (int c = 0; c < num_of_clubs; c++) {
    //cout << c << endl;
    best = min(best, solve(x-clubs[c])+1);
  }

  value[x] = best;
  calced[x] = 6;
  return best;
}
int main() {
  cin >> target;
  cin >> num_of_clubs;
  for (int x = 0; x < num_of_clubs; x++) {
    cin >> _;
    clubs[x] = _;
  }
  ans = solve(target);
  if (ans == 1000000){
    cout << "Roberta acknowledges defeat.";
    return 0;
  }
  cout << "Roberta wins in " << ans << " strokes.";
  return 0;
}

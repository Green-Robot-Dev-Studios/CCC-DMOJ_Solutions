#include <iostream>
using namespace std;
int main() {
  int r, c;
  cin >> r >> c;
  int numOfCats;
  cin >> numOfCats;

  long long int board[30][30] = {0};
  board[1][1] = 1;

  bool cat[30][30];
  cat[1][1] = true;
  for (int i = 0; i < numOfCats; i++){
    int x, y;
    cin >> x >> y;
    cat[y][x] = true;
  }
  for (int ci = 1; ci < c+1; ci++){
    for (int ri = 1; ri < r+1; ri++){
      if (!cat[ci][ri]){
        board[ci][ri] = board[ci-1][ri] + board[ci][ri-1];
      }
    }
  }

  cout << board[c][r];
}

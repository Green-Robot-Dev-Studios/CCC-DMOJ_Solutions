#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int q, c, _, total = 0;
vector<int> D, P;
int main() 
{
  cin >> q >> c;


    if (q == 1){
      for (int x = 0; x < c; x++)
      {
        cin >> _;
        D.push_back(_);
      }
      for (int x = 0; x < c; x++)
      {
        cin >> _;
        P.push_back(_);
      }
    } else if (q == 2){
      for (int x = 0; x < c*2; x++)
      {
        cin >> _;
        P.push_back(_);
      }
    }

  if (q == 1)
  {
    sort(D.begin(), D.end());
    sort(P.begin(), P.end());
    //cout << D[0] << P[0];
    for (int x = 0; x < c; x++)
    {
      //cout << D[x] << P[x];
      total += max(D[x], P[x]);
      //cout << " D " << max(D[x], P[x]) << endl;
    }
    cout << total;
  } else if (q == 2)
  {
    sort(P.begin(), P.end());
    for (int x = 0; x < c; x++){
      total += P[c + x];
    }
    cout << total;
  }

}

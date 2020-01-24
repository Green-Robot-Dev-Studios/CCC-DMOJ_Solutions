#include <iostream>
#include <vector>
using namespace std;
int _, count = 0;
vector<int> availible, need;
int main() {
  for (int x = 0; x < 8; x++){
    cin >> _;
    availible.push_back(_);
  }
  for (int x = 0; x < 8; x++){
    cin >> _;
    if (_ < availible[x]){
      availible[x] = availible[x] - _;
      count += _;
      //cout << "A 1Adding " << _ << endl;
    } else {
      count += availible[x];
      //cout << "A 2Adding " << availible[x] << endl;
      _ = _ - availible[x];
      availible[x] = 0;
      
      if (x%2 == 0) { //negative blood
        if (x == 6){
          //bloody ab blood type negative

          if (availible[2] > 0){
            if (_ < availible[2]){
              availible[2] = availible[2] - _;
              count += _;

            } else {
              count += availible[2];

              _ = _ - availible[2];
              availible[2] = 0;
            }
          }

          if (availible[4] > 0){
            if (_ < availible[4]){
              availible[4] = availible[4] - _;
              count += _;

            } else {
              count += availible[4];

              _ = _ - availible[4];
              availible[4] = 0;
            }
          }

        }

        if (availible[0] > 0){
          if (_ < availible[0]){
            availible[0] = availible[0] - _;
            count += _;
            //cout << "O- 3Adding " << _ << endl;
          } else {
            count += availible[0];
            //cout << "O- 4Adding " << availible[0] << endl;
            _ = _ - availible[0];
            availible[0] = 0;
          }
        }
      } else { //positive blood or negative

        if (_ < availible[x-1]){
          count += _;
          availible[x-1] = availible[x-1] - _;
          _ = 0;
        } else {
          count += availible[x-1];
          _ = _ - availible[x-1];
          availible[x-1] = 0;
        }

        if (x == 7){
          //bloody ab blood type positive or negative
          if (availible[3] > 0){
            if (_ < availible[3]){
              availible[3] = availible[3] - _;
              count += _;

            } else {
              count += availible[3];

              _ = _ - availible[3];
              availible[3] = 0;
            }
          }

          if (availible[5] > 0){
            if (_ < availible[5]){
              availible[5] = availible[5] - _;
              count += _;

            } else {
              count += availible[5];

              _ = _ - availible[5];
              availible[5] = 0;
            }
          }

          if (availible[2] > 0){
            if (_ < availible[2]){
              availible[2] = availible[2] - _;
              count += _;

            } else {
              count += availible[2];

              _ = _ - availible[2];
              availible[2] = 0;
            }
          }

          if (availible[4] > 0){
            if (_ < availible[4]){
              availible[4] = availible[4] - _;
              count += _;

            } else {
              count += availible[4];

              _ = _ - availible[4];
              availible[4] = 0;
            }
          }

        }
        if (availible[1] > 0){
          if (_ < availible[1]){
            availible[1] = availible[1] - _;
            count += _;
            //cout << "O+ 7Adding " << _ << endl;
          } else {
            count += availible[1];
            //cout << "O+ 8Adding " << availible[1] << endl;
            _ = _ - availible[1];
            availible[1] = 0;
          }
        }
        
        if (availible[0] > 0){
          if (_ < availible[0]){
            availible[0] = availible[0] - _;
            count += _;
            //cout << "O- 5Adding " << _ << endl;
          } else {
            count += availible[0];
            //cout << "O- 6Adding " << availible[0] << endl;
            _ = _ - availible[0];
            availible[0] = 0;
          }
        }

      }
    }
  }
  cout << count;
}

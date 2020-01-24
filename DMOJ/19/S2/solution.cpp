#include <iostream>
#include <vector>
#include <cmath>
#include<bits/stdc++.h> 
using namespace std;

int inputs;
bool flag = false; 
int _;
int upper, lower;
vector<int> questions;

const int MAX = 2000000; 

vector <int> primes; 

void sieveSundaram() 
{ 
    bool marked[MAX/2 + 100] = {0}; 

    for (int i=1; i<=(sqrt(MAX)-1)/2; i++) 
        for (int j=(i*(i+1))<<1; j<=MAX/2; j=j+2*i+1) 
            marked[j] = true; 

    primes.push_back(2); 
 
    for (int i=1; i<=MAX/2; i++) 
        if (marked[i] == false) 
            primes.push_back(2*i + 1); 
} 

int main() {
  sieveSundaram();
  cin >> inputs;

  for (int x = 0; x < inputs; x++){
    cin >> _;
    questions.push_back(_);

  }

  for (int x = 0; x < inputs; x++){
    float exact_val = questions[x];
    flag = false;
    //cout << prime(questions[x]);
    if (binary_search(primes.begin(), primes.end(), questions[x])) {
      cout << questions[x] << " " << questions[x] << endl;
      flag = true;
    }
    if (exact_val == 4){
      cout << "3 5" << endl;
      flag = true;
    } else if (exact_val == 6) {
      cout << "5 7" << endl;
      flag = true;
    }
    lower = questions[x] - 1;
    upper = questions[x] + 1;
    
    int mod_lower = 1;
    int mod_upper = 1;

    while (!flag) {
      bool down = false;
      bool up = false;
      while (!down && mod_lower != 0){
        lower -= mod_lower;
        down = (binary_search(primes.begin(), primes.end(), lower))? true : false;
        
        //cout << "working2";
      }
      while (!up && mod_upper != 0){
        upper += mod_upper;
        up = (binary_search(primes.begin(), primes.end(), upper))? true : false;
        
        //cout << mod_upper;
      }

      if ((lower + upper) / 2.0 == exact_val){
        cout << lower << " " << upper << endl;
        flag = true;
      } else {
        if (questions[x] - lower > upper - questions[x]){
          mod_lower = 0;
          mod_upper = 1;
          //cout << "Lower";
        } else {
          mod_lower = 1;
          mod_upper = 0;
          //cout << "Upper";
        }
      }
    }

    if (!flag){
      cout << "0 0 fail" << endl;
    }
    

  }

}

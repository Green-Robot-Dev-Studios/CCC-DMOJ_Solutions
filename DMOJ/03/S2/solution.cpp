#include <iostream>
#include <string>
#include <iterator>
using namespace std;
int main() {
  int test_cases;
  cin >> test_cases;
  cin.ignore();
  string words[4];
  for (int t = 0; t < test_cases; t++){
    for (int i = 0; i < 4; i++){ //only take last word
      getline(cin, words[i]);
      size_t found = words[i].rfind(' ');
      if (found!=string::npos){
        words[i] = words[i].substr(found+1);
      }
      for (int j = 0; j < words[i].length(); j++){
        words[i][j] = tolower(words[i][j]);
      }
      //cout << words[i];
    }
    string verse[4];
    for (int w = 0; w < 4; w++){
      for (int i = words[w].length(); i >= 0; i--){
        if (words[w][i] == 'i' || words[w][i] == 'a' || words[w][i] == 'e' || words[w][i] == 'o' || words[w][i] == 'u'){
          //cout << w << " verse " << words[w].substr(i) << endl;
          verse[w] = words[w].substr(i);
          break;
        }
        verse[w] = words[w];
        //cout << verse[w];
      }
      
    }

    if (verse[0] == verse[1] && verse[2] == verse[3] && verse[1] == verse[2]){
      cout << "perfect";
    } else if (verse[0] == verse[1] && verse[2] == verse[3]){
      cout << "even";
    } else if (verse[0] == verse[2] && verse[1] == verse[3]){
      cout << "cross";
    } else if (verse[0] == verse[3] && verse[1] == verse[2]){
      cout << "shell";
    } else{
      cout << "free";
    }
    cout << endl;
  }
}

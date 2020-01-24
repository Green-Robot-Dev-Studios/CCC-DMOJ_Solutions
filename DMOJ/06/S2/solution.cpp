#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

int main() {
  string pt, enc, out;
  char cipher[27] = {0};
  getline(cin, pt);
  getline(cin, enc);
  getline(cin, out);
  for (int i = 0; i < pt.size(); i++){
    if (enc[i]==' '){ 
      cipher[0] = pt[i];
      //cout << "setting 0 to " << pt[i] << endl;
    } else {
      cipher[(int)enc[i]-64] = pt[i];
      //cout << "setting " << (int)enc[i]-64 << " to " << pt[i] << " " << endl;
    }
  }

  for (int i = 0; i < 27; i++){
    if (cipher[i]){
      //cout << cipher[i] << " ";
    }
    
  }
  //cout << endl;
  for (int i = 0; i < out.size(); i++){
    if (cipher[(int)out[i]-64]){
      cout << cipher[(int)out[i]-64];
      //cout << (int)out[i]-64 << " ";
    } else {
      cout << ".";
    }
  }
}

#include <iostream>
#include <string>
using namespace std;

string input;
int happy, sad = 0;

int main(){
	getline(cin, input);

	for (int x = 0; x < input.length(); x++){
		if (input[x] == ':' && input[x+1] == '-' && input[x+2] == ')'){
			happy++;
		} else if (input[x] == ':' && input[x+1] == '-' && input[x+2] == '('){
			sad++;
		}
	}

	if (sad == 0 && happy == 0){
		cout << "none";
		//return 0;
	} else if (sad == happy){
		cout << "unsure";
		//return 0;
	} else if (happy > sad){
		cout << "happy";
		//return 0;
	} else if (sad > happy){
		cout << "sad";
		//return 0;
	}

	int _;
	cin >> _;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int no_of_questions;
int r, w = 0;
vector <char> answers;
vector <char> r_answers;
int main(){
	cin >> no_of_questions;

	for (int x = 0; x < no_of_questions; x++) {
		char letter;
		cin >> letter;
		
		answers.push_back(letter);
	}
	for (int x = 0; x < no_of_questions; x++) {
		char letter;
		cin >> letter;
		
		r_answers.push_back(letter);
		
	}
	for (int x = 0; x < no_of_questions; x++) {
		if (answers[x] == r_answers[x]) {
			r++;
		} else if (answers[x] != r_answers[x]) {
			w++;
		}

	}
	cout << r;
	int _;
	cin >> _;
}

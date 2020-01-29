#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string whitelist = "IOSHZXN";
string word;
int main()
{
	cin >> word;
	//cout << word.size() - 1;
	for (int x = 0; x < word.size(); x++) {
		//cout << x << endl;
		size_t found = whitelist.find(word[x]);
		//cout << found;
		if (found == string::npos) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}

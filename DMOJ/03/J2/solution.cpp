#include <iostream>
using namespace std;

int main() {
int t, s, h;
cin>>t;
cin>>s;
cin>>h;

for(int i = 0; i < t; i++){
	cout<<"*";
	for(int ii = 0; ii < s; ii++){
		cout<<" ";
	}
	cout<<"*";
	for(int i = 0; i < s; i++){
		cout<<" ";
	}
		cout<<"*"<<endl;
}
int bruh = 3 + s * 2;
for(int i = 0; i < bruh; i++){
cout<<"*";
}
cout<<endl;
for(int i = 0; i < h; i++){
for(int i = 0; i <= s; i++){
cout<<" ";
}
cout<<"*"<<endl;
}
	return 0;
}

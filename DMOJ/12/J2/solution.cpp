#include <iostream>
using namespace std;
int main(){
int a;
int b;
int c;
int d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;

{if(a>b&&b>c&&c>d&&a>d)
	cout<<"Fish Diving"<<endl;
else if(a<b&&b<c&&c<d)
	cout<<"Fish Rising"<<endl;
else if(a==b&&b==c&&b==d&&c==d)
	cout<<"Fish At Constant Depth"<<endl;
else cout<<"No Fish"<<endl;
}

 return 0;}

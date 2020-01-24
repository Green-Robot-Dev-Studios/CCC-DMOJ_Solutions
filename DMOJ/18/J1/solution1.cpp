#include <iostream>
using namespace std;
int main() {
int x;
int c;
int a;
int b;

cin>>x;
cin>>c;	
cin>>a;
cin>>b;
if ((x==8||x==9)&&a==c&&(b==8||b==9))
	cout<<"ignore"<<endl;
else 
	cout<<"answer"<<endl;
    return 0;
}

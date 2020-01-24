#include <iostream>
using namespace std;
int main() {
int x;
int b;
cin>>x;
cin>>b;

if (x>=3&&b<=4)
	cout<<"TroyMartian"<<endl;
if(x<=6&&b>=2)
	cout<<"VladSaturnian"<<endl;
if (x<=2&&b<=3)
	cout<<"GraemeMercurian"<<endl;
return 0;
}

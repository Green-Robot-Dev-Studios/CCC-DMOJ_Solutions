#include <iostream>
using namespace std;
int main(){
float w;
float h;
cin>>w;
cin>>h;
int g=w/(h*h);
if(g<18.5)
	cout<<"Underweight"<<endl;
else if(18.5<g&&g<25)
	cout<<"Normal weight"<<endl;
else if(g>25)
	cout<<"Overweight"<<endl;
return 0;
}

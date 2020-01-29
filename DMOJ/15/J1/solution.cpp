#include <iostream>
using namespace std;
int main() {
int counter=0;
char x;
int count=0;
while(counter<6){
counter++;
cin>>x;
if(x=='W')
count++;
}
if (count==5||count==6)
	cout<<"1"<<endl;
else if(count==3||count==4)
	cout<<"2"<<endl;
else if (count==1||count==2)
	cout<<"3"<<endl;
else if (count==0)
	cout<<"-1"<<endl;

return 0;
}

#include <iostream>
using namespace std;
int main() {
string s;
getline(cin,s);
string happy(":-)");
string sad(":-(");
int happ=0;
int count=0;
for(int i=0;i<s.length();i++){
if(s.substr(i,3)==happy){
happ++;
}
if(s.substr(i,3)==sad){
count++;
}
}
if(happ==count&&happ>0&&count>0){
cout<<"unsure"<<endl;
}
if(happ<count){
cout<<"sad"<<endl;
}

if(count<happ){
cout<<"happy"<<endl;
}
else if(count==0&&happ==0){
cout<<"none"<<endl;
}


}

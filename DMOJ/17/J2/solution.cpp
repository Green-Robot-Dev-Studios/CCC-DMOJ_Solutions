#include <iostream>
using namespace std;
int main() {
int k;
long n;
long ans;
cin>>n;
cin>>k;
for(int i=0;i<=k;n*=10, i++)
ans =ans+ n;
cout<<ans<<endl;
}

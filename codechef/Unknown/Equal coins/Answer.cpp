#include <iostream>
using namespace std;

int main() {
	long long int tc;
	cin>>tc;
	while(tc--){
	    long long int c1,c2;
	    cin>>c1>>c2;
	    if(c1==0) c1=c2;
	    if(c1%2==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

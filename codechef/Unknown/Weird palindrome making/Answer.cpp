#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int tc;
	cin>>tc;
	while(tc--){
	    long long int n,noo=0,temp;
	    cin>>n;
	    while(n--)
	    {
	        cin>>temp;
	        if(temp%2==1) noo++;
	    }
	    if(noo!=0)
	    noo--;
	    cout<<(long long int)noo/2+(long long int)noo%2<<endl;
	}
	return 0;
}

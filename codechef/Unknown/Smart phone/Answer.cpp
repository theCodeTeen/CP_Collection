#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll n,temp,maxProfit=0;
	std::vector<ll> v;
	cin>>n;
	for(ll i=0;i<n;i++)
	{ cin>>temp;
	  v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(ll i=0;i<n;i++)
    {
        if(maxProfit<(v[i]*(v.size()-i)))
        {
            maxProfit=v[i]*(v.size()-i);
            //cout<<"loop"<<maxProfit<<" "<<v[i]*(v.size()-i)<<endl;
        }
        
        
        //cout<<maxProfit<<" "<<v[i]*(v.size()-i)<<endl;
    }
    cout<<maxProfit;
	return 0;
}

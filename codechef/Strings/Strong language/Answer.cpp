#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,k,count;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    cin>>s;
	    count=0;
	    for(long long int i=0;i<n;i++)
	    {
	        if(s[i]=='*')
	        count++;
	        else
	        count=0;
	        if(count>=k)
	        {
	            count=-1;
	            break;
	        }
	    }
	    if(count==-1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

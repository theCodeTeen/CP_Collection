#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,q,min,temp;
	cin>>t;
	while(t--)
	{
	    cin>>q;
	    min=q-1;
	    for(long long int i=2;i*i<=q;i++)
	    {
	        if(q%i==0)
	        {
	            temp=(q/i)-i;
	            if(temp<min)
	            min=temp;
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
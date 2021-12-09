#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,count,flag,ptr;
	cin>>t;
	string a;
	while(t--)
	{
	    cin>>a;
	    count=0;
	    ptr=a.length()-1;
	    while(ptr>=0)
	    {
	        flag=0;
	        if((ptr+1)%2!=0)
	        ptr--;
	        else
	        {
	            for(int i=0;i<(ptr+1)/2;i++)
	            if(a[i]!=a[(ptr+1)/2+i])
	            {flag=1;break;}
	            if(flag==1)
	                ptr--;
	            else
	               ptr/=2;
	        }
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int noOfTestCases,arr[26];
	string s;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>s;
	    fill(arr,arr+26,0);
	    for(long long int i=0;i<s.length();i++)
	    {
	        if(arr[s[i]-'a']==0)
	        {
	            arr[s[i]-'a']=1;
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	long long int noOfTestCases,cur,ans,temp;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>cur;
	    temp=5;
	    ans=0;
	    while(cur/temp>0)
	    {
	        ans+=cur/temp;
	        temp*=5;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

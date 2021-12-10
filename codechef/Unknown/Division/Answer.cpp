#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	long long int noOfTestCase,k,a,b,result,sum;
	long double d;
	cin>>noOfTestCase;
	while(noOfTestCase--)
	{
	    cin>>k>>a>>b;
	    sum=0;
	    
	    a=a%b;
	    if(a==0)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    for(long long int i=0;i<k;i++)
	    {
	        a=a*10;
	        sum+=a/b;
	        a=a%b;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}

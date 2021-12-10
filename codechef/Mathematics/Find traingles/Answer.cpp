#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	long long int noOfTestCases,x,y,count,count2,temp;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>x>>y;
	    count=0;
	    count2=0;
	    temp=x-1;
	    for(long long int i=1;i<=x-1;i++)
	    {
	        count+=temp;
	        temp--;
	        //cout<<count<<":"<<temp<<endl;
	    }
	    count*=y;
	    //cout<<count<<":co"<<endl;
	    
	    //cout<<"line 1 done"<<endl;
	    temp=y-1;
	    for(long long int i=1;i<=y-1;i++)
	    {
	        count2+=temp;
	        temp--;
	        //cout<<count2<<":"<<temp<<endl;
	    }
	    count2*=x;
	    
	    cout<<count+count2<<endl;
	}
	return 0;
}

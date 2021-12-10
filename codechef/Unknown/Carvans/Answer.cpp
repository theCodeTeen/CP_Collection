#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int noOfTestCases,curMaxSpeed,count,temp,noOfCars;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    count=1;
	    cin>>noOfCars;
	    cin>>temp;
	    curMaxSpeed=temp;
	 
	    for(long long int i=1;i<noOfCars;i++)
	    {
	        cin>>temp;
	        if(temp<curMaxSpeed)
	        {
	            count++;
	            curMaxSpeed=temp;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

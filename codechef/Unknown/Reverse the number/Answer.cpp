#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int noOfTestCases,no,rev,temp;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    rev=0;
	    temp=0;
	    cin>>no;
	    while(no>0)
	    {
	        temp=no%10;
	        rev=rev*10+temp;
	        no=no/10;
	    }
	    cout<<rev<<endl;
	    
	}
	return 0;
}

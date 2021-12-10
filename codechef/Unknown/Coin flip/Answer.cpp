#include <iostream>
using namespace std;

int main() {
	int noOfTestCases,games,init,no,hot;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>games;
	    while(games--)
	    {
	        cin>>init>>no>>hot;
	        if(no%2==0)
	        {
	            cout<<no/2<<endl;
	        }else
	        {
	            if(hot==init)
	            {
	                cout<<no/2<<endl;
	            }
	            else
	            {
	                cout<<(no/2)+1<<endl;
	            }
	        }
	    }
	}
	return 0;
}

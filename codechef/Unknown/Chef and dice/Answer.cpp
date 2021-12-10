#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int noOfTestCases,dice,count,initDice;
	long double result;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>dice;
	    initDice=dice;
	    count=0;
	    count=dice/4*44;
	    //cout<<"count="<<count<<endl;
	    dice=dice-(dice/4)*4;
	    if(dice==0)
	    count+=16;
	    //cout<<"dice="<<dice<<endl;
	    if((long double)dice/4<=0.75)
	    {
	        if(dice==1)
	        {
	        count+=20;
	        if(initDice>4)
	        count+=12;
	        }
	        else if(dice==2)
	        {
	            count+=36;
	            if(initDice>4)
	            count+=8
	            ;
	        }
	        else if(dice==3)
	        {
	            count+=51;
	            if(initDice>4)
	            count+=4;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

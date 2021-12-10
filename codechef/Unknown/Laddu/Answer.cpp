#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,activites,ladoos,tint;
	string origin,temp;
	cin>>n;
	while(n--)
	{
	    ladoos=0;
	    cin>>activites>>origin;
	    while(activites--)
	    {
	        cin>>temp;
	        if(temp=="TOP_CONTRIBUTOR")
	        ladoos+=300;
	        else if(temp=="CONTEST_HOSTED")
	        ladoos+=50;
	        else if(temp=="BUG_FOUND")
	        {
	            cin>>tint;
	            ladoos+=tint;
	        }
	        else if(temp=="CONTEST_WON")
	        {
	            cin>>tint;
	            if(tint>20)
	            tint=20;
	            ladoos+=20-tint+300;
	        }
	        //cout<<temp<<":"<<ladoos<<endl;
	    }
	    ladoos=origin=="INDIAN"?ladoos/200:ladoos/400;
	    cout<<ladoos<<endl;
	}
	return 0;
}

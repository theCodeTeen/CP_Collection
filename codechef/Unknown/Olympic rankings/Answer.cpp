#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,sum1,sum2,tc;
	cin>>tc;
	while(tc--){
	    sum1=0;
	    sum2=0;
	    for(int i=0;i<6;i++){
	        cin>>a;
	        if(i<3){
	            sum1+=a;
	            continue;
	        }
	        sum2+=a;
	    }
	    if(sum1>sum2)
	    cout<<"1"<<endl;
	    else
	    cout<<"2"<<endl;
	}
	return 0;
}
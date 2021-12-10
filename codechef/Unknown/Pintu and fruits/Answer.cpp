#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--)
    {
        int m,fr;
        cin>>m>>fr;
        int tof[fr],check[fr],arr1[m],arr2[m];
        for(int i=0;i<m;i++)
            cin>>arr1[i];
        for(int i=0;i<m;i++)
            cin>>arr2[i];
        memset(tof,0,sizeof(tof));
        memset(check,0,sizeof(check));
        for(int i=0;i<m;i++)
        {
            tof[arr1[i]%fr] += arr2[i];
            check[arr1[i]%fr] =1;
        }
    	int min,f;
    	f=0;
    	min = INT_MAX;
    	for(int i=0;i<fr;i++)
    	{
    	    if(tof[i]==0)
    	    {
    	        if(check[i]==1)
    	        {
    	            f=2;
    	            break;
    	        }
    	    }
    	    else
    	    {
    	        if(tof[i]<min)
    	        {
    	            min = tof[i];
    	            f=1;
    	        }
    	        
    	    } 
    	}
    	if(f==2 || f ==0)
    	cout<<0<<endl;
    	else
    	cout<<min<<endl;
    }
	return 0;
}
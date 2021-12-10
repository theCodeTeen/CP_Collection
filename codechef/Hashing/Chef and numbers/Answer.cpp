#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> array;
	long long int num,temp,cases,hash[1001],larg;
	cin>>cases;
	while(cases--)
	{
	    cin>>num;
	    larg=-1;
	    memset(hash,0,sizeof(hash));
	    array.clear();
	    for(int i=0;i<num;i++)
	    {
	     cin>>temp;
	     array.push_back(temp);
	     if(temp>larg)
	     larg=temp;
	    } 
	    temp=array[0];
	    hash[array[0]]++;
	    for(int i=1;i<num;i++)
	    {
	        if(temp==array[i])
	        {
	            temp=-1;
	        }
	        else
	        {
	            hash[array[i]]++;
	            temp=array[i];
	        }
	    }
	    temp=-1;
	    num=-1;
	    for(int i=0;i<=larg;i++)
	    {
	       if(hash[i]>temp)
	       {temp=hash[i];
	        num=i;
	       }
	    }
	    cout<<num<<endl;
	}
	return 0;
}
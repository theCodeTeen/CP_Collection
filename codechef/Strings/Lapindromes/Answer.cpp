#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int noOfTestCases,arr1[26],arr2[26],check,temp;
	string s;
	cin>>noOfTestCases;
	while(noOfTestCases--)
	{
	    cin>>s;
	    check=1;
	    temp=-1;
	    //make all positions 0
	    for(long long int i=0;i<26;i++)
	    {   arr1[i]=0;
	        arr2[i]=0;
	    }
	    
	    for(long long int i=0;i<s.length()/2;i++)
	        arr1[(long long int)s[i]-'a']++;
	   
	    temp=s.length()%2==1?(s.length()/2)+1:s.length()/2;
	    for(long long int i=temp;i<s.length();i++)
	        arr2[(long long int)s[i]-'a']++;
	        
	    for(long long int i=0;i<26;i++)
	    if(arr1[i]!=arr2[i])
	    {
	        check=0;
	        break;
	    }
	    if(check)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

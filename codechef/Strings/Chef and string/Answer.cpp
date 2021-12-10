#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int noOfTestCases,count;
    cin>>noOfTestCases;
    string s;
    while(noOfTestCases--)
    {
        cin>>s;
        count=0;
        for(long long int i=1;i<s.length();i++)
        {
            if((s[i-1]=='x'&&s[i]=='y')||(s[i-1]=='y'&&s[i]=='x'))
            {
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

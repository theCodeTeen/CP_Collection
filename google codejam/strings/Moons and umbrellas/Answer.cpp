#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfTestCases,noOfTestTemp,X,Y,markLength,minCost;
    string str;
    cin>>noOfTestCases;
    noOfTestTemp=noOfTestCases;
    while(noOfTestTemp--)
    {
        //Taking inputs
        cin>>X>>Y>>str;
        minCost=0;
        
        //iterating through input string
        for(int i=0;i<str.length();i++)
        {
            markLength=0;
            //in case you detect a '?'
            if(str[i]=='?')
            {
                //finding length of ?'s
                for(int j=i;j<str.length();j++)
                if(str[j]=='?')
                markLength++;
                else
                break;
                
                //if initial '?'  is not at 0 or final '?' is not at last position then
                if(i!=0&&i+markLength!=str.length())
                {
                    if(str[i-1]!=str[i+markLength])
                    {
                        if(str[i-1]=='J')
                        minCost+=Y;
                        else
                        minCost+=X;
                    }
                }
                
                //taking i to the end of current '?' string
                i=i+markLength-1;
            }
        }
        
        //calculating cost of already defined CJ & JC patterns
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]=='C'&&str[i+1]=='J')
            minCost+=X;
            else if(str[i]=='J'&&str[i+1]=='C')
            minCost+=Y;
        }
        
        //output
        cout<<"Case #"<<noOfTestCases- noOfTestTemp<<": "<<minCost<<endl;
    }
    return 0;
    //Author: Dharmik Bhadra
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfTest,smallestNo,smallestIndex,inputSize,temp,cost,noOfTestTemp;
    cin>>noOfTest;
    vector<int> arr;
    noOfTestTemp=noOfTest;
    while(noOfTestTemp--)
    {
        //setting all values
        arr.clear();
        cost=0;
        
        //recieve inputs
        cin>>inputSize;
        for(int i=0;i<inputSize;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        
        //iterate till inputSize-1
        for(int i=0;i<inputSize-1;i++)
        {
            smallestIndex=-1;
            smallestNo=INT_MAX;
            
            //find smallestIndex and smallestNo
            for(int j=i;j<inputSize;j++)
            if(arr[j]<smallestNo){
            smallestNo=arr[j];
            smallestIndex=j;
            }
            
            //updating cost
            cost+=(smallestIndex-i+1);
            
            //reversing array
            int half=((smallestIndex-i+1)/2)-1;
            for(int j=i;j<=half+i;j++)
            {
                temp=arr[j];
                arr[j]=arr[smallestIndex-j+i];
                arr[smallestIndex-j+i]=temp;
            }
        }
        //display cost of current case
        cout<<"Case #"<<noOfTest-noOfTestTemp<<": "<<cost<<endl;
    }
    return 0;
}

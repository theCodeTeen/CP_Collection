#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    float k1,k2,k3,v,RECORD;
    RECORD=9.58;
    cin>>t;
    while(t--)
    {
        cin>>k1>>k2>>k3>>v;
        k1=k1*k2*k3*v;
        k1=100/k1;
        k1=(int)(k1*100+0.5);
        k1=(float)k1/100;
        if(k1>=RECORD)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        //cout<<k1<<endl;
    }
    return 0;
}
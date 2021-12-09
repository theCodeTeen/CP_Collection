void multiply(vector<int> &ans,int n){
        int res,carry=0;
        for(int i=0;i<ans.size();i++)
        {
            res=(ans[i]*n)+carry;
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
}
vector<int> factorial(int N){
        vector<int> ans={1};
        for(int i=2;i<=N;i++)
            multiply(ans,i);
        reverse(ans.begin(),ans.end());
        return ans;
}
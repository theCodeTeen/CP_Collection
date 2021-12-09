long long maxSubarraySum(int arr[], int n){
        
        long long int msf=INT_MIN;
        long long int meh=0;
        for(int i=0;i<n;i++)
        {
            meh+=arr[i];
            if(msf<meh) msf=meh;
            if(meh<0) meh=0;
        }
        return msf;
}
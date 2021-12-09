bool subArrayExists(int arr[], int n)
{
        int sum=0;
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            hash[sum]++;
            if(hash[sum]>=2||sum==0) return true;
        }
        return false;
}
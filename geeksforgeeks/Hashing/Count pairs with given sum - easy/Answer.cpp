int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> hash;
        int count=0;
        for(int i=0;i<n;i++)
        {
           count+=hash[k-arr[i]];
           hash[arr[i]]++;
        }
        return count;
 }
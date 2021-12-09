int kthSmallest(int arr[], int l, int r, int k)
{
        int max=-1;
        for(int i=0;i<=r;i++)
            if(arr[i]>max) max=arr[i];
        
        vector<bool> hash(max+1,false);
        for(int i=0;i<=r;i++)
         hash[arr[i]]=true;
        
        for(int i=0;i<=max;i++)
        {
            if(hash[i]==true)
            {
                k--;
                if(k==0)
                return i;
            }
        }
        
}
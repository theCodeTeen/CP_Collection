int doUnion(int a[], int n, int b[], int m)  {
        long int count=0,max= 0;
        
        for(int i=0;i<n;i++)
        if(a[i]>max) max=a[i];
        
        for(int j=0;j<m;j++)
        if(b[j]>max) max=b[j];
        
        vector<long int> hash(max+1,0);
        
        for(int i=0;i<n;i++)
        hash[a[i]]++;
        
        for(int i=0;i<m;i++)
        hash[b[i]]++;
        
        for(int i=0;i<=max;i++)
        if(hash[i]!=0) count++;
        
        return count;
}
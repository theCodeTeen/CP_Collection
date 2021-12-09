vector<int> find(int arr[], int n , int x )
{
    vector<int> lenXY;
    int l=0,r=n-1;
    int mid=(l+r)/2;
    while(arr[mid]!=x&&l<r)
    {
        if(arr[mid]<x) 
            l=mid+1;
        else
            r=mid-1;
            
        mid=(l+r)/2;
    }
    
    if(arr[mid]==x) {
        l=mid;
        r=mid;
        while(l>-1&&arr[l]==x){
            if(l>1000) l-=1000;
            else l--;
        }
        while(r<n&&arr[r]==x){
            if(r<n-1000) r+=1000;
            else r++;
        }
        
        while(l<n-1&&arr[l]!=x)l++;
        
        while(r>0&&arr[r]!=x) r--;
        
        lenXY.push_back(l);
        lenXY.push_back(r);
    }
    else
    {
        lenXY.push_back(-1);
        lenXY.push_back(-1);
    }
    return lenXY;
}
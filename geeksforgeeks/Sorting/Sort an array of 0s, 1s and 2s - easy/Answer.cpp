void sort012(int a[], int n)
{
        // coode here 
        int arr[3]={0,0,0},ptr=0;
        for(int i=0;i<n;i++)
        arr[a[i]]++;
    
        for(int i=0;i<n;i++)
        {
            if(arr[ptr]==0)
            ptr++;
            
            a[i]=ptr;
            
            arr[ptr]--;
        }
}
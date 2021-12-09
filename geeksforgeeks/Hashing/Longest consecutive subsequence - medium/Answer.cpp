int findLongestConseqSubseq(int arr[], int N)
{
        unordered_map<int,bool> hash;
        int max=-1,maxCount=0,count=0;
        for(int i =0;i<N;i++){
        hash[arr[i]]=true;
        if(max<arr[i]) max= arr[i];
        }
        
        int i=0;
        while(i<=max){
    
            if(hash.find(i)!=hash.end()) {
               count++;
               if(count>maxCount) maxCount = count;
            }
            else count=0;
            i++;
        }
        return maxCount;
}
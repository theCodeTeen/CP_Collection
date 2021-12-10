int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int m;
        
        //FIND WHERE THE SORTED ARRAY STARTS
        while((r-l)>1){
            m=(r+l)/2;
            if(nums[l]<nums[m])
                l=m;
            else
                r=m;
        }
        if(r==nums.size()-1&&nums[0]<nums[r])
            r=0;
        
        //R= INDEX WHERE OG SORTED ARRAY STARTS
        //EG: [4,5,6,7,0,1,2] R=4
        
        //USE BINARY SEARCH TO FIND TARGET
        int st=r;
        l=0,r=nums.size()-1;
        
        int ogmid;
        while(l<=r){
            m=(l+r)/2;
           
            //CONVERTING MID POSITION BEFORE ROTATION TO THE MID AFTER ROTATION
            //EG: IN NON ROTATED ARRAY [0,1,2,3] MID=1 BUT AFTER ROTATIONS I.E [2,3,0,1] OGMID=3  
            if(m<(nums.size()-st)%nums.size()) ogmid=m+st;
            else ogmid=m-(nums.size()-st)%nums.size();
            
            if(nums[ogmid]==target) break;
            
            if(nums[ogmid]>target) r=m-1;
            else l=m+1;
    
        }
     
        //CHECK IF NO EXIST OR NOT 
        if(l>r&&nums[ogmid]!=target) return -1;
        
        //RETURN TARGEST INDEX
        return ogmid;
}
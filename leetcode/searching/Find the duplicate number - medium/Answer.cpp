int findDuplicate(vector<int>& nums) {
       int hare=nums[0];
       int tortoise=nums[0];
       do{
           hare=nums[nums[hare]];
           tortoise=nums[tortoise];
       }while(hare!=tortoise);
        
       tortoise=nums[0];
       while(hare!=tortoise)
       {
           hare=nums[hare];
           tortoise=nums[tortoise];
       }
       return hare;
}
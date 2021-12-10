void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-2;i>=0;i--)
        {
        //1)compare from end if [i]>[i+1] if not move to step 2
            if(nums[i]<nums[i+1])
            {
                //2)swap i with a element larger than it by searching from n-1 to i+1 goto step 3
                for(int j=nums.size()-1;j>i;j--)
                {
                    if(nums[i]<nums[j])
                    {
                        int temp=nums[i];
                        nums[i]=nums[j];
                        nums[j]=temp;
                        break;
                    }
                }
                //3)arrange all the elements starting from i+1 to n-1 in ascending order goto step 5
                for(int j=i+1;j<=i+((nums.size()-i-1)/2);j++)
                {
                    int temp=nums[j];
                    nums[j]=nums[nums.size()-(j-i)];
                    nums[nums.size()-(j-i)]=temp;
                }
                 break;         
            }
        }
        //4)if step 2 and 3 were not activated sort the whole array in ascending order goto step 5
        if(i==-1)
        for(int j=0;j<nums.size()/2;j++)
        {
            int temp=nums[j];
            nums[j]=nums[nums.size()-1-j];
            nums[nums.size()-1-j]=temp;
        }
}
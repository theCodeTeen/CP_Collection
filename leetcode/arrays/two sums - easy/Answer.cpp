vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for(long long int i=0;i<nums.size();i++)
            for(long long int j=i+1;j<nums.size();j++)
            {
                if(target ==nums[i]+nums[j])
                {
                    sum.push_back(i);
                    sum.push_back(j);
                }
            }
        return sum;
}
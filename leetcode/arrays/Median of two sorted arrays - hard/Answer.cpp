double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n1=0,n2=0;
        while(n1!=nums1.size()||n2!=nums2.size())
        {
            if(n1==nums1.size())
            {
                nums3.push_back(nums2[n2]);
                n2++;
            }
            else if(n2==nums2.size())
            {
                 nums3.push_back(nums1[n1]);
                 n1++;
            }
            else
            {
                if(nums1[n1]>=nums2[n2])
                {
                    nums3.push_back(nums2[n2]);
                    n2++;
                }
                else if(nums1[n1]<nums2[n2])
                {
                    nums3.push_back(nums1[n1]);
                    n1++;
                }
            }
        }
        
        if(nums3.size()%2!=0)
        {
            return nums3[nums3.size()/2];
        }
        else
        {
            return ((double)nums3[(nums3.size()/2)-1]+nums3[(nums3.size()/2)])/2;
        }
}
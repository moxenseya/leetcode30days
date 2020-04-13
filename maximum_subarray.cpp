class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int local_max =0;
        int global_max = INT_MIN;
        //Kadane's Algorithm
        for(int i =0,n = nums.size();i<n;i++)
        {
            local_max = max(nums[i],nums[i]+local_max);
            if(local_max>global_max)
            {
                global_max = local_max;
            }
        }
        return global_max;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running_sum(nums.size(),0);
        
        for(int i =0;i<nums.size();i++)
        {
            for(int j =0;j<=i;j++)
            {
             running_sum[i]+=nums[j];   
            }
        }
        return running_sum;
    }
    
};
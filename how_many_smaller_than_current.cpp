class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> values;
        
        for(int i : nums)
            values.push_back(0);
        
        for(int i =0;i<nums.size();i++)
        {
        for(int j =0;j<nums.size();j++)
        {
            if(nums[j]<nums[i] && i!=j)
            {
                values[i]++;
            }
        }
        }
    return values;    
    }
};
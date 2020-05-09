class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> val;
        for(int x=0;x<nums.size()-1;x++)
        {
            for(int y = 1;y<nums.size();y++)
            {
                if(nums[x]+nums[y]==target && x!=y)
                {
                    val={x,y};
                    break;
                }
            }
        }
        return val;
    }
};
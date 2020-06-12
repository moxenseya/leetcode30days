class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i =0;
        vector<int> result;
        
        while(i<n)
        {
        result.push_back(nums[i]);
        result.push_back(nums[n+i]);
            i++;
        }
        return result;
    }
};
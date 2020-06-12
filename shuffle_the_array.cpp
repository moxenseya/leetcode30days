class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i =0;
        int mid = nums.size()/2;
        vector<int> result;
        
        while(i<mid)
        {
        result.push_back(nums[i]);
        result.push_back(nums[mid+i]);
            i++;
        }
        return result;
    }
};
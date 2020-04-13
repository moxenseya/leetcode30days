class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numZeroes=0, nonZeroesIndex=0;
        
        while(nonZeroesIndex<nums.size())
        {
        if(nums[nonZeroesIndex]!=0)
            nums[numZeroes++] = nums[nonZeroesIndex];
        
            nonZeroesIndex++;
        }
        while(numZeroes<nums.size())
            nums[numZeroes++]=0;
        
        
    }
};
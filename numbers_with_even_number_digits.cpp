class Solution {
public:
   
    int findNumbers(vector<int>& nums) {
       int count=0;
        
        for(int i =0 ; i< nums.size(); i++){
            if((nums[i]>9 && nums[i]<100) || (nums[i]>999 && nums[i]<10000))
            {
                count++;
            }
        }
        
        return count;
    }
};
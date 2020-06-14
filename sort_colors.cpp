class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero =0;
        int ones =0;
        int twos =0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zero++;
            else if(nums[i]==1)
            ones++;
                else if(nums[i]==2)
                    twos++;
        }
        
        
        int index=0;
        while(zero>0)
        {
            nums[index] = 0;
            index++;
            zero--;
        }
        
        while(ones>0)
        {
            nums[index] = 1;
            index++;
            ones--;
        }
        
        while(twos>0)
        {
            nums[index] = 2;
            index++;
            twos--;
        }  
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        //reverse whole array
        reverseArray(nums,0,nums.size()-1);
        //reverse first k elements
        reverseArray(nums,0,k-1);
        //reverse k+1 to end of array
        reverseArray(nums,k,nums.size()-1);
    }
    void reverseArray(vector<int> &nums, int start, int end)
    {
        while(start<end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    
};
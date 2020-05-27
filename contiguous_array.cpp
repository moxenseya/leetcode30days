class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mymap;
        mymap.insert(make_pair(0,-1));
        
        int maxLength =0;
        int count =0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count--;
            else
                count++;
            
            if(mymap.find(count)!=mymap.end())
            {
                map<int,int>::iterator it = mymap.find(count);
                maxLength = max(maxLength,i-it->second);
            }
            else
                mymap.insert(make_pair(count,i));
        }
        
        return maxLength;
    }
};
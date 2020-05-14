class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       map<int,int> values;
        
        for(int &x : nums)
        {
            values[x]++;
        }
        
        for(map<int,int>::iterator iter = values.begin(); iter!=values.end();++iter)
        {
         if(iter->second == 1)
             return iter->first;
        }
        return -1;
    }
};
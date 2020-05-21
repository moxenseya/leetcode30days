class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> values;
        for(int &i:nums)
            values.insert(i);
        int n = nums.size();
        vector<int> missing;
        for(int i =1;i<=nums.size();i++)
        {
            if(values.find(i)==values.end())
            {
                missing.push_back(i);
            }
        }
    return missing;
    }
};
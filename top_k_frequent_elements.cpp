class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> counts;
        
        for(int i =0;i<nums.size();i++)
        {
            counts[nums[i]]++;
        }
        multimap<int,int> frequencymap;
        for(map<int,int>::iterator it = counts.begin();it!=counts.end();++it)
        {
            frequencymap.insert(make_pair(it->second,it->first));
        }
        vector<int> sol;
        for(multimap<int,int>::reverse_iterator rit = frequencymap.rbegin();rit!=frequencymap.rend(),k>0;++rit)
        {
            sol.push_back(rit->second);
            k--;
        }
        
        
        
        return sol;
    }
};
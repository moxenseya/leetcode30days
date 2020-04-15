class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<vector<string>> result;
        
        multimap<string,string> map;
        
        for(string s: strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());
            map.emplace(temp,s);
        }
        
        vector<string> group;
        auto temp = (*map.begin()).first;
        for(auto &x: map)
        {
            if(x.first!=temp)
            {
                result.push_back(group);
                group.clear();
                temp = x.first;
            }
            group.push_back(x.second);
        }
            result.push_back(group);
            
        
        return result;
    }
};
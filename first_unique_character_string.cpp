class Solution {
public:
    int firstUniqChar(string s) {
        std::multimap<char,int> charmap;
        std::multimap<char,int>::iterator it;
        for(char &x:s)
        {
            it = charmap.find(x);
            if(it==charmap.end())
            {
                charmap.emplace(make_pair(x,1));
            }
            else
            {
                it->second++;
            }
        }
        
        
        for(int i =0;i<s.size();i++)
        {
            if(charmap.find(s[i])->second == 1)
                return i;
        }
    return -1;
        
    }
};
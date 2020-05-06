class Solution {
public:
    
        bool canConstruct(string ransomNote, string magazine) {
        
        std::multiset<char> mag;
            
            for(char &x: magazine)
                mag.emplace(x);
            
            std::multiset<char>::iterator it;
            
            for(int x =0;x<ransomNote.size();x++)
            {
            it=mag.find(ransomNote[x]);
                    if(it!=mag.end())    
                    {mag.erase (it);
                    }
                else 
                    return false;
                
            }
            return true;
        }
};
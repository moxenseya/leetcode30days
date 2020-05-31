class Solution {
public:
    bool isPalindrome(string s) {
        
        //If alpha-numeric, convert to lower case
        
        for(char &x : s)
        {
            x = isalnum(x) ? tolower(x) : ' ';
        }
        
        //Remove all whitespaces
        
       std::string::iterator end_pos = std::remove(s.begin(), s.end(), ' ');
       s.erase(end_pos, s.end());
        
        int i =0, j = s.size()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
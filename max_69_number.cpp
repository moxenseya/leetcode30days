class Solution {
public:
    int maximum69Number (int num) {
     string s = to_string(num);
        for(auto &x: s)
        {
            //Going from the left, replace the first 6 with a 9. This will give us the max possible number after one swap
            if(x=='6')
            {
                x='9';
                break;
            }
        }
        return stoi(s);
        
    }
};
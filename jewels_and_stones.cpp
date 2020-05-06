class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int jewels=0;
        for(char &x : J)
        {
            for(char &y : S)
            {
                if(y==x)
                    jewels++;
            }
        }
        return jewels;
    }
};
class Solution {
public:
    int arrangeCoins(int n) {
        int level = 1;
        while(true)
        {
            if(n-level >= 0)
            {
                n -= level;
                level++;
            }
            else
                break;
        }
        return level-1;
    }
};
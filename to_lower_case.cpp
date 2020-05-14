class Solution {
public:
    string toLowerCase(string str) {
       string toUpper = "";
        
        for(char &x: str)
        {
            if(x>=65 && x<=90)
            {
                toUpper+= (x+32);
            }
            else
                toUpper+=x;
        }
        return toUpper;
    }
};
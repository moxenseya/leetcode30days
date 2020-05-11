class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int front = 0;
        int back = s.size()-1;
        
        char temp;
        
        while(front <= back)
        {
            temp = s[front];
            s[front] = s[back];
            s[back] = temp;
            front++;
            back--;
        }
    }
};
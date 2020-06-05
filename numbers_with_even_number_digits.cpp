class Solution {
public:
    bool isEvenDigited(int &num)
    {
        int numDigits =0;
        while(num>0)
        {
            num=num/10;
            numDigits++;
        }
        return (numDigits%2 == 0);
    }
    int findNumbers(vector<int>& nums) {
      int numEvens =0;
        for(int &n : nums)
        {
            if(isEvenDigited(n))
            numEvens++;
        }
        return numEvens;
    }
};
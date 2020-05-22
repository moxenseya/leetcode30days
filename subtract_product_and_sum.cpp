class Solution {
public:
    void getDigits(vector<int> *digits, int n)
    {
        int digit;
        while(n>0)
        {
            digit = n%10;
            digits->push_back(digit);
            n=n/10;
        }
    }
    int subtractProductAndSum(int n) {
        vector<int> digits;
        getDigits(&digits,n);
     
        int sum =0;
        int product = 1;
        for(int i =0;i<digits.size();i++)
        {
            sum+=digits[i];
            product*=digits[i];
        }
        return product-sum;
    }
};
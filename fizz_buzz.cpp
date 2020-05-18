class Solution {
public:
    vector<string> fizzBuzz(int n) {
       vector<string> strings;
        string result;
        for(int i =1;i<=n;i++)
       {
           result ="";
            if(i%3==0)
                result+="Fizz";
            if(i%5==0)
                result+="Buzz";
            if(i%3!=0 && i%5!=0)
                result = to_string(i);
                
           strings.push_back(result);
       }
        return strings;
    }
};
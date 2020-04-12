class Solution {
public:
    unordered_set<int> vals;
bool findval(unordered_set<int> *vals, int *sum)
{
    for(int x: *vals)
    {
        if (x==*sum)
            return true;
    }
    return false;
}
    
    bool isHappy(int n) {
    
        
        
        bool result;
        
        int sum=0, digit;
        while(n>0)
        {
        digit=n%10;
        sum+=digit*digit;
         n=n/10;
        }
        cout << sum << endl;
        if(sum==1)
        result = true;
        
        else if(findval(&vals,&sum))
            result = false;
        
        else
        {
            vals.emplace(sum);
        isHappy(sum);    
        }  
        
        return result;
    }
};
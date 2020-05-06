class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        set<int> elements;
        
        for(int &x: nums)
            elements.insert(x);
        
        
        int Maxelement=nums[0];
        int maxCount=0;
        int mycount;
       
        
        for (std::set<int>::iterator it=elements.begin(); it!=elements.end(); ++it)
        {
              mycount = std::count (nums.begin(), nums.end(), *it);
            if(mycount > maxCount)
            {
                maxCount = mycount;
                Maxelement = *it;
            }
        }
        
        
        return Maxelement;
        
    }
};
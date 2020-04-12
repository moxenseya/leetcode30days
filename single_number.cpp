class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int uniqueval;
        std::unordered_map<int,int> values;
        
        for(int i =0,j=nums.size();i<j;i++)
        {

            std::unordered_map<int,int>::iterator got = values.find (nums[i]);

            if ( got == values.end() )
                auto num= values.emplace(nums[i],1);
            else
                //std::cout << got->first << " is " << got->second;
                got->second++;
            
            
  
        }
        
        for( auto &x : values)
        {
         //   cout << x.first << " and " << x.second << endl;
            if(x.second == 1)
            {uniqueval = x.first;
            break;}
        }
        
        
        return uniqueval;}
};
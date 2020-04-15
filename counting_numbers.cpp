class Solution {
public:
    
    bool findelem(vector<int> &arr, int elem)
    {
        auto it = find(arr.begin(),arr.end(),elem);
        return it!=arr.end();
    }
    
    int countElements(vector<int>& arr) {
        
        int result = 0;
        
        
        if(arr.size()<=1)
            return 0;
        
        vector<int> next_arr;
        //Create a vector to store succcessive numbers for each number        
        for(int i=0;i<arr.size();i++)
        {
            next_arr.push_back(arr[i]+1);
        }
        
        
        for(int i =0;i<arr.size();i++)
        {
            //if Successive element is found for element i, increment result
            if(findelem(arr,next_arr[i]))
                result++;
        }
        return result;
    }
};
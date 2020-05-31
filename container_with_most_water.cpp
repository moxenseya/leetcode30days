class Solution {
public:
    int maxArea(vector<int>& height) {
     int maxArea = 0;
        int i =0, j = height.size()-1;
        while(i<j)
        {
            //calculate the Y value for rectangle
            int x = min(height[i],height[j]);
            //calculate the area and return max Value
            maxArea = max(maxArea,(j-i) * x);
            
            //If bars are lower than current, they will store only lesser value. Keep moving closer as long as the bars as smaller than the minimum encountered so far
            while(height[i] <=x && i < j ) i++;
            while(height[j] <=x && i < j)  j--;
        }
        return maxArea;
    }
};
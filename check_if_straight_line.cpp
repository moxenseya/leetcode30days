class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2)
        {
            return true;
        }
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        auto slope = std::abs((double)(y2-y1)/(x2-x1));
        
        for(int i =2;i< coordinates.size();i++)
        {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];
            auto slope_i = std::abs((double)(yi-y1)/(xi-x1));
            
            if(slope_i != slope)
                return false;   
        }
        return true;
        
    }
};
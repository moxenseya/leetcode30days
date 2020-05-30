class Solution {
public:
// Ref : BarackGrande@Disc

    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        //Optimization code
        cin.tie(NULL);
        ios_base::sync_with_stdio(0);
        
        //Custom comparison function
        auto distanceSort = []( vector<int> &a, vector<int> &b)
        {
        return (a[0] * a[0] + a[1] * a[1]) < (b[0]*b[0] + b[1]*b[1]);    
        };
        
       //Sort by distance in ascending order
nth_element(points.begin(),points.begin()+K, points.end(),distanceSort);
        //Resize the points vector to K elements
        points.resize(K);
        return points;
        
    }
};
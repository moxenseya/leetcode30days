// Ref : BarackGrande@Disc
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        //Optimization code
        cin.tie(NULL);
        ios_base::sync_with_stdio(0);
        
       //Sort by distance in ascending order using custom comparator
nth_element(points.begin(),points.begin()+K, points.end(),[]( vector<int> &a, vector<int> &b)
        {
        return (a[0] * a[0] + a[1] * a[1]) < (b[0]*b[0] + b[1]*b[1]);    
        });
        //Resize the points vector to K elements
        points.resize(K);
        return points;
        
    }
};
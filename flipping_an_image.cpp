class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        cin.tie(NULL);
        ios_base::sync_with_stdio(0);
        
        vector<vector<int>> invertedImage;
        
        
        for(auto &slice : A)
        {
            vector<int> inverted_slice(slice.begin(),slice.end());
            for(int &i : inverted_slice)
            {
                i = (i==0) ? 1 : 0;
            }
            std::reverse(inverted_slice.begin(),inverted_slice.end());
           
        invertedImage.push_back(inverted_slice);    
        
        }
        
        return invertedImage;
    }
};
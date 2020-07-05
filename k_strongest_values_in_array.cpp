class Solution {
public:    
    vector<int> getStrongest(vector<int>& arr, int k) {
        nth_element(arr.begin(), arr.begin()+(arr.size()-1)/2, arr.end());
        int median = arr[(arr.size()-1)/2];
        nth_element(arr.begin(), arr.begin()+k, arr.end(), [median](int a,int b){return (abs(a-median) > abs(b-median)) || (abs(a-median) == abs(b-median) && a>b);});
        return vector<int>(arr.begin(), arr.begin()+k);
    }
};
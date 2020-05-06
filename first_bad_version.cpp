// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int earliest = 1;
        int latest = n;
        while(earliest < latest)
        {
            int mid = earliest + (latest-earliest)/2;
            if(isBadVersion(mid))
                latest = mid;
            else
                earliest = mid+1;
            
        }
        return earliest;
    }
};
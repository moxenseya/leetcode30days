class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
      
        if(trust.size()< N-1)
            return -1;
        
        int trusted_count[N];
        int trusted_by_count[N];
        
        for(int i=0;i<N;i++)
        {
            trusted_count[i]=0;
            trusted_by_count[i]=0;
        }
        
        
        for(vector<int> trustPair : trust)
        {
            trusted_count[trustPair[0]-1]+=1;
                        trusted_by_count[trustPair[1]-1]+=1;
        }
        
        for(int i =0;i<N;i++)
        {
             if(trusted_count[i] == 0 && trusted_by_count[i]== N-1)
                 return i+1;
        }
        return -1;
        
    }
};
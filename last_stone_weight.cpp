class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int last_stone_weight = 0;
        int stone1Index;
        int stone2Index;
        int smaller_stone_weight;
        
        while(stones.size()>=1)
        {
            if(stones.size()==1)
            {last_stone_weight = stones[0];break;}
            
            std::sort(stones.begin(),stones.end());
            //pick the two largest stones
            stone1Index = stones.size()-1;
            stone2Index = stones.size()-2;
            
            //destroy the stones
            if(stones[stone1Index] == stones[stone2Index])
            {
                stones.erase(stones.begin()+stone1Index);
                stones.erase(stones.begin()+stone2Index);
            }
            else if(stones[stone1Index] <stones[stone2Index])
            {
                smaller_stone_weight = stones[stone1Index];
                stones[stone2Index]-= smaller_stone_weight;
                stones.erase(stones.begin()+stone1Index);
                
            }            
            else if(stones[stone1Index] > stones[stone2Index])
            {
                smaller_stone_weight = stones[stone2Index];
                stones[stone1Index]-=smaller_stone_weight;
                stones.erase(stones.begin()+stone2Index);
            }
            
        }
        
        return last_stone_weight;
    }
};
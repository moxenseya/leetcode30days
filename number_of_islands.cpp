class Solution {
public:
    
    void callDFS(vector<vector<char>> &grid , int i , int j)
    {
        int m = grid.size(),n=grid[0].size();
        //Check boundary conditions to stop recursion
        if(i < 0 || i==m || j < 0 || j==n || grid[i][j] == '0')
            return;
        
        //set all 1s to 0s
        grid[i][j]='0';
        
        //look in 4 directions to check for 1s and recur
        
        callDFS(grid,i-1,j);
        callDFS(grid,i+1,j);
        callDFS(grid,i,j-1);
        callDFS(grid,i,j+1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size(), n = m ? grid[0].size() : 0;
        for(int i =0; i < m ;i++)
        {
            for(int j =0; j < n ;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    callDFS(grid,i,j);
                }
            }
        }
        return count;
    }
};
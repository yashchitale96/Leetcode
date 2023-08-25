class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
         vector<int> MaxRow,MaxCol;
        for(int i=0; i<grid.size();i++)
        {
            int maxiR = INT_MIN;
            for(int j=0; j<grid[0].size(); j++)
            {
                int ans = grid[i][j];
                maxiR = max(maxiR, ans); 
            }
            MaxRow.push_back(maxiR);
        }

        for(int j=0; j<grid[0].size();j++)
        {
            int maxiC=INT_MIN;
            for(int i=0; i<grid.size(); i++)
            {
                int ans = grid[i][j];
                maxiC = max(maxiC, ans); 
            }
            MaxCol.push_back(maxiC);
        }

        int inc=0;
        for(int i=0; i<grid.size();i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                inc += min(MaxRow[i], MaxCol[j]) - grid[i][j];
            }
        }
       return inc;
    }
};
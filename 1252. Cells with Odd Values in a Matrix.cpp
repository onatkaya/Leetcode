class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>> initial(m, vector<int>(n,0));
        
        for(int i = 0; i < indices.size(); i++)
        {
            
            int row_inc = indices[i][0];
            int col_inc = indices[i][1];
            
            // increment all the cells on row_inc
            for(int j = 0; j < n; j++)
            {
                initial[row_inc][j] += 1;
            }
            
            // increment all the cells on col_inc
            for(int j = 0; j < m ; j++)
            {
                initial[j][col_inc] += 1;
            }
    
        }
        
        int result = 0;
        
        for(auto & x:initial)
        {
            for(auto y: x)
            {
                if(y % 2 == 1)
                    result++;
            }
        }
        
        return result;
    }
};
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0;
        
        int len = mat.size(); // number of columns = number of rows
            
        for(int i = 0; i < len; i++)
        {
            sum += mat[i][i] + mat[len-1-i][i];
        
        }
        
        if(len % 2 == 1)
        return sum - mat[(len/2)][(len/2)];
        
        else
        return sum;
        
    }
};
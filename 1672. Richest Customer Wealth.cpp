class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int m = accounts.size(); // number m
        int n = accounts[0].size(); // number n
        
        int arr[m];
        
        for(int i = 0; i < m; i++)
        {
            int sum = 0;
            
            for(int j = 0; j < n; j++)
            {
                sum += accounts[i][j];   
            }
            
            arr[i] = sum;
        }
        
        
        //finding the maximum
        
        int max = arr[0];
        
        for(int x:arr)
        {
            if(x > max)
            max = x;
        }
        
        return max;
    
    }
};
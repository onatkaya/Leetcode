class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums;
        
        for(int i = 0; i < n ;i++)
        {
            nums.push_back(start + 2*i);
            
        }
        
        int result = nums[0];
        
        for(int i = 1; i < n; i++)
        {
            result ^= nums[i];
        }
        
        return result;
        
    }
};
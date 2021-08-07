class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int operations = 0;
        
        if(nums.size() == 1 || nums.size() == 0)
            return 0;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] >= nums[i+1])
            {
                operations += nums[i] - nums[i+1] + 1;
                nums[i+1] = nums[i] + 1;
            }
        }
        
        return operations;
    }
};
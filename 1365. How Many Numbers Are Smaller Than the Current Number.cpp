class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     
        vector<int> results;
        
        int num_1;
        
        for(int i = 0; i < nums.size() ; i++){
            
            num_1 = 0;
            
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j])
                num_1++;
                    
            }
            
            results.push_back(num_1);
        }
        
        
        return results;
        
    }
};
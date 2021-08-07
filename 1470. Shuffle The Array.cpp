class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
            int inc_num = 0;

            for (int i = 0; i <= 2*n; i++) {

                if (i % 2 == 1)
                {
                    nums.insert(nums.begin() + i, nums[n + inc_num]);
                    nums.erase(nums.begin() + n + inc_num+1);
                    inc_num++;
                }
            }

            return nums;
    }
};
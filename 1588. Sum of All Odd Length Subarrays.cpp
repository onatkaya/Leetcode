class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int result = 0;
        
        for(int i = 1; i <= arr.size(); i += 2)
        {
            int index = 0;
            
            while(index + i <= arr.size())
            {
                result += accumulate(arr.begin()+index, arr.begin()+index+i,0);

                index++;
            }
        }
    
        return result;
    }
};
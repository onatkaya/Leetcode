class Solution {
public:
    int balancedStringSplit(string s) {
        
        int result = 0;
        int index = 0;
        
         int r = 0;
         int l = 0;
        
        while(index < s.size())
        {
            if(s[index] == 'R')
                r++;
            else if(s[index] == 'L')
                l++;
            
            
            if(l == r && l != 0)
            {
                result++;
                r = 0;
                l = 0;
            }
            
            index++;
            
        }
        
        return result;
    }
};
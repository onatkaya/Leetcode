class Solution {
public:
    
    char shift(char c, int x)
    {
        return(c + x);
    }
    
    string replaceDigits(string s) {
     
        for(int i = 0; i < s.size() ; i=i+2)
        {
            s[i+1] = shift(s[i], (int)s[i+1] - 48);
        }
        
        return s;
    }
};
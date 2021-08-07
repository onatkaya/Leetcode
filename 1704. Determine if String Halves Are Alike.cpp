class Solution {
public:
    
    int num_vowel(string s)
    {
        int result = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'  )
                result++;
        }
        
        return result;
    }
    
    bool halvesAreAlike(string s) {
        
        return ( num_vowel(s.substr(0, (s.size()/2)))  == num_vowel(s.substr((s.size()/2))) );
    }
};
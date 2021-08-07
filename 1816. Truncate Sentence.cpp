class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string temp;
        stringstream ss(s);
        
        string result = "";
        
        while(ss >> temp && k > 0)
        {
            if(k == 1)
                result += temp;
            else
                result += temp + " ";
            
            k--;
        }
        
        return result;
    }
};
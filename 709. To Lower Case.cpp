class Solution {
public:
    string toLowerCase(string str) {
        
        string result = "";
        
        for(auto x: str){
            if((int)x >= 65 && (int)x <= 90){
                result += char((int)x + 32);
            }
            else
                result += x;
        }
        
        
        return result;
    }
};
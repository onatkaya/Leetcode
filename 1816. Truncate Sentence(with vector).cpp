class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string temp;
        stringstream ss(s);
        
        string result = "";
        
        vector<string> my_vec;
        
        while(ss >> temp)
        {
            my_vec.push_back(temp);    
        }
        
        for(int i = 0; i < k; i++)
        {
            if(i == k - 1)
                result += my_vec[i];
            else
                result += my_vec[i] + " ";
            
        }
    
        return result;
    }
};
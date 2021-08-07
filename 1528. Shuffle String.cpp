class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string* arr1 = new string[s.size()];
        string result = "";

        for (int i = 0; i < s.size(); i++)
        {
            arr1[indices[i]] += s[i];
        }

        for (int i = 0; i < s.size(); i++)
        {
            result += arr1[i];
        }
        
        delete []arr1;
        arr1 = nullptr;
        
        return result;
        
    }
};
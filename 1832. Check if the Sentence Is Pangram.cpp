class Solution {
public:
    bool checkIfPangram(string sentence) {
        // number of letters: 26
        
        int my_arr[26] = {};
        
        for(int i = 0; i < sentence.size(); i++)
        {
            if(my_arr[(int)sentence[i] - 97] == 0)
            {
                my_arr[(int)sentence[i] - 97] = 1;
            }
        }
        
        int sum = 0;
        
        for(int x: my_arr)
            sum += x;
        
        if(sum == 26)
            return true;
        else
            return false;
        
    }
};
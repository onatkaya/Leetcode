class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int result = 0;

        for (int i = 0; i < words.size(); i++)
        {
            bool consistent = true;

            for (int j = 0; j < words[i].size(); j++)
            {
                if (allowed.find(words[i][j]) == string::npos)
                {
                    consistent = false;
                    break;
                }
            }

            if (consistent)
                result++;
        }

        return result;
    }
};
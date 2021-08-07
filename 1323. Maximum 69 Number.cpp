class Solution {
public:
    int maximum69Number(int num) {

        vector<int> num_vec;

        int temp = num;
        int result = 0;

        while (temp > 0)
        {
            num_vec.push_back(temp % 10);
            temp = temp / 10;
        }

        for (int i = 0; i < num_vec.size(); i++)
        {
            if (num_vec[num_vec.size()-1-i] == 6)
            {
                num_vec[num_vec.size()-1-i] = 9;


                for (int j = 0; j < num_vec.size(); j++)
                {
                    result += (num_vec[num_vec.size()-1-j] * pow(10, num_vec.size() - 1 - j));
                }

                return result;

            }
        }

        return num;
    }
};
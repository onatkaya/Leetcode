class Solution {
public:
    int reverse(int x) {
        
        int result = 0;
        bool is_negative = 0;

        int upper_limit = pow(2,31) -1;
        string upper_str = to_string(upper_limit);
        
        if(x == pow(2,31) * (-1)) // case for -(2^31)
            return 0;
        
        if (x < 0)
        {
            is_negative = 1;
            x *= (-1);
        }

        while (x > 0)
        {
            int temp = x % 10;
            x /= 10;
    
            string str1 = to_string(result);
            
            //edge cases check
            if(upper_str.size() == str1.size() + 1)
            {
                for(int i = 0; i < str1.size();i++)
                {
                  if((int)(upper_str[i]) < (int)(str1[i]) )
                      return 0;
                  else if((int)(upper_str[i]) == (int)(str1[i]))
                      continue;
                  else
                      break;
                }
            }
            
            result = result * 10 + temp;
        }

        if (is_negative)
            result *= (-1);

        return result;
    }
};
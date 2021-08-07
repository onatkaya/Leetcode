class Solution {
public:
    string defangIPaddr(string address) {
        
            int index_1, temp = 0;
        
            string result = "";

            while (index_1 != -1)
            {
                index_1 = address.find(".", temp + 1);

                if (temp == 0)
                    result += address.substr(temp, index_1 - temp) + "[.]";
                else if (index_1 == -1)
                    result += address.substr(temp+1, index_1 - temp-1);
                else
                    result += address.substr(temp + 1, index_1 - temp - 1) + "[.]";

                temp = index_1;
            }
            
            return result;
        
    }
};
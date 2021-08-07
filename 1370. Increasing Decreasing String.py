class Solution(object):
    def sortString(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        my_dict = collections.defaultdict(int)
        
        for i in s:
            my_dict[i] += 1

        sorted_dict = collections.OrderedDict(sorted(my_dict.items()))
        
        
        result = ""
        
        end_num = len(s)
        count_0 = 0
        
        my_bool = False
        
        while(my_bool == False):
            
            for k,v in sorted_dict.items():
                if(v == 0):
                    my_bool = True
                else:
                    my_bool = False
                    break
            
            
            for k,v in sorted_dict.items():
                if(sorted_dict[k] > 0):
                    result += k
                    sorted_dict[k] -= 1
            
            temp_str = ""
            
            for k,v in sorted_dict.items():
                if(sorted_dict[k] > 0):
                    temp_str = k + temp_str
                    sorted_dict[k] -= 1
        
            result += temp_str
            
        
        return result
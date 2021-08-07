class Solution(object):
    def removeOuterParentheses(self, s):
        """
        :type s: str
        :rtype: str
        """
        result_str = ""
        my_st = deque()
        
        for i in s:
            
            my_st.append(i)
    
            if(my_st.count("(") == my_st.count(")")):
                
                my_st.pop()
                temp = ""
                
                while(len(my_st) > 1):
                    
                        temp += my_st[len(my_st)-1]
                        my_st.pop()
                
                my_st.pop()
                    
                result_str += temp[::-1]
                
        return result_str
                
            
        
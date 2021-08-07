class Solution(object):
    def maxDepth(self, s):
        """
        :type s: str
        :rtype: int
        """
        if(len(s) == 0):
            return 0
        elif(len(s) == 1 and (s != "(" and s != ")")):
            return 0
        
        my_stack = deque()
        
        result = 0
        
        for x in s:
            if(x == "("):
                my_stack.append("a")
            elif(x == ")"):
                my_stack.pop()
            
            temp = len(my_stack)
            
            if(temp > result):
                result = temp
                
        
        return result
class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        
        my_dict = dict()
        
        for i in paths:
            my_dict[i[0]] = i[1]
            
        
        my_bool = False
        
        m = paths[0][0]
        
        while(my_bool == False):        
            if(my_dict[m] in my_dict.keys()):
                m = my_dict[m]
            else:
                my_bool = True
                
        return my_dict[m]
class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        
        my_dict = {}
        morse_list = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        
        for i in range(len(words)):
            temp = ""
            for j in range(len(words[i])):
                temp += morse_list[ord(words[i][j])-97]
            my_dict[words[i]] = temp

        return(len(set(my_dict.values())))
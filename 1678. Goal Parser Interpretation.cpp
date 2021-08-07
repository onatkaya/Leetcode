class Solution {
public:
    string interpret(string command) {
        
        int index = 0;
        
        string result = "";
        
        while(index < command.size())
        {
            if(command[index] == 'G')
            {
                result += "G";
            }
            else if(command[index] == '(' && command[index+1] == ')')
            {
                result += "o";
                
            }
            else if(command[index] == '(' && command[index+1] == 'a' && command[index + 2] == 'l' && command[index + 3] == ')')
            {
                result += "al";              
            }
            else
            {
                
            }
            index++;
        }
        
        return result;
    
    }
};
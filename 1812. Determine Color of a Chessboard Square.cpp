class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        if((int)coordinates[0] % 2 == 1) // on one of these: a,c,e,g
        {
            if(coordinates[1] % 2 == 1)
                return false;
            else
                return true;
        }
        else // on one of these: b,d,f,h
        {
            if(coordinates[1] % 2 == 1)
                return true;
            else
                return false;
        }
        
    }
};
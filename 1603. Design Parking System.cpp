class ParkingSystem {
public:
    int b;
    int m;
    int s;
    
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1)
        {
            // big
            if(b >= 1)
            {
                b--;
                return true;
            }
            else
                return false;
            
        }
        else if(carType == 2)
        {
            // medium
            if(m >= 1)
            {
                m--;
                return true;
            }
            else
                return false;
            
        }
        else if(carType == 3)
        {
            //small
            if(s >= 1)
            {
                s--;
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
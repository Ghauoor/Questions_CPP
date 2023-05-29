//!https://leetcode.com/problems/design-parking-system/
class ParkingSystem {
private: 
    int big;
    int mid;
    int small;    
public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->mid = medium;
        this->small = small;
    }
    
    bool addCar(int carType) 
    {
        if (carType == 1) 
        {
            if (big > 0)
            {
                big--;
                return true;
            }

        } else if (carType == 2)
        {
            if (mid > 0)
            {
                mid--;
                return true;
            }
        } else {
            if (small > 0) 
            {
                small--;
                return true;
            }
        }

        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
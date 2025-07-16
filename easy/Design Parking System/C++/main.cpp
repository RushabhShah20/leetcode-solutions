// Problem: Design Parking System
// Link to the problem: https://leetcode.com/problems/design-parking-system/
class ParkingSystem
{
public:
    vector<int> ans;
    ParkingSystem(int big, int medium, int small)
    {
        ans.reserve(3);
        ans[0] = big;
        ans[1] = medium;
        ans[2] = small;
    }

    bool addCar(int carType)
    {
        if (ans[carType - 1] > 0)
        {
            ans[carType - 1]--;
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
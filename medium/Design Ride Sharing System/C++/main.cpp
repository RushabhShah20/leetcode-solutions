// Problem: Design Ride Sharing System
// Link to the problem: https://leetcode.com/problems/design-ride-sharing-system/
class RideSharingSystem
{
public:
    queue<int> riders, drivers;
    unordered_set<int> activeRiders;
    RideSharingSystem()
    {
    }

    void addRider(int riderId)
    {
        riders.push(riderId);
        activeRiders.insert(riderId);
    }

    void addDriver(int driverId)
    {
        drivers.push(driverId);
    }

    vector<int> matchDriverWithRider()
    {
        while (!riders.empty() && activeRiders.find(riders.front()) == activeRiders.end())
        {
            riders.pop();
        }
        if (riders.empty() || drivers.empty())
        {
            return {-1, -1};
        }
        const int driverId = drivers.front();
        const int riderId = riders.front();
        drivers.pop();
        riders.pop();
        activeRiders.erase(riderId);
        return {driverId, riderId};
    }

    void cancelRider(int riderId)
    {
        if (activeRiders.count(riderId))
        {
            activeRiders.erase(riderId);
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */

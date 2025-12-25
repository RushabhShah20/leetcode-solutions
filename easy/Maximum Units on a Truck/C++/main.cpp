// Problem: Maximum Units on a Truck
// Link to the problem: https://leetcode.com/problems/maximum-units-on-a-truck/
class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] > b[1]; });
        int ans = 0;
        for (vector<int> box : boxTypes)
        {
            if (box[0] <= truckSize)
            {
                ans += (box[0] * box[1]);
                truckSize -= box[0];
            }
            else
            {
                ans += (truckSize * box[1]);
                break;
            }
        }
        return ans;
    }
};
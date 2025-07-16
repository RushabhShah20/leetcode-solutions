// Problem: Count Tested Devices After Test Operations
// Link to the problem: https://leetcode.com/problems/count-tested-devices-after-test-operations/
class Solution
{
public:
    int countTestedDevices(vector<int> &batteryPercentages)
    {
        int ans = 0, n = batteryPercentages.size();
        for (int i = 0; i < n; i++)
        {
            if (batteryPercentages[i] > 0)
            {
                ans++;
                for (int j = i + 1; j < n; j++)
                {
                    if (batteryPercentages[j] > 0)
                    {
                        batteryPercentages[j]--;
                    }
                }
            }
        }
        return ans;
    }
};
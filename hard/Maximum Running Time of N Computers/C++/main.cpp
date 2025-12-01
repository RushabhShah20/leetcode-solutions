// Problem: Maximum Running Time of N Computers
// Link to the problem: https://leetcode.com/problems/maximum-running-time-of-n-computers/
class Solution
{
public:
    long long maxRunTime(int n, vector<int> &batteries)
    {
        long long ans = 0;
        for (const int battery : batteries)
        {
            ans += battery;
        }
        sort(batteries.begin(), batteries.end());
        int k = batteries.size();
        for (int i = k - 1; i >= 0; i--)
        {
            if (batteries[i] > ans / n)
            {
                ans -= batteries[i];
                n--;
            }
            else
            {
                break;
            }
        }
        ans /= n;
        return ans;
    }
};
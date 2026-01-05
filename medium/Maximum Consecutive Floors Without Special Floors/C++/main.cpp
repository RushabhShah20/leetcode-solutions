// Problem: Maximum Consecutive Floors Without Special Floors
// Link to the problem: https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors/
class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &special)
    {
        const int n = special.size();
        sort(special.begin(), special.end());
        int ans = 0;
        if (special[0] != bottom)
        {
            ans = max(ans, special[0] - bottom);
        }
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, special[i] - special[i - 1] - 1);
        }
        if (special[n - 1] != top)
        {
            ans = max(ans, top - special[n - 1]);
        }
        return ans;
    }
};
// Problem: Maximize the Total Height of Unique Towers
// Link to the problem: https://leetcode.com/problems/maximize-the-total-height-of-unique-towers/
class Solution
{
public:
    long long maximumTotalSum(vector<int> &maximumHeight)
    {
        int n = maximumHeight.size();
        sort(maximumHeight.begin(), maximumHeight.end(), greater<int>());
        long long ans = 0;
        ans += maximumHeight[0];
        for (int i = 1; i < n; i++)
        {
            maximumHeight[i] = min(maximumHeight[i], maximumHeight[i - 1] - 1);
            if (maximumHeight[i] <= 0)
            {
                return -1;
            }
            ans += maximumHeight[i];
        }
        return ans;
    }
};
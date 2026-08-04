// Problem: Missing Number In Arithmetic Progression
// Link to the problem: https://leetcode.com/problems/missing-number-in-arithmetic-progression/
class Solution
{
public:
    int missingNumber(vector<int> &arr)
    {
        const int n = arr.size();
        int mn = INT_MAX, mx = INT_MIN;
        unordered_map<int, int> m;
        for (int i = 1; i < n; i++)
        {
            const int x = arr[i] - arr[i - 1];
            mn = min(mn, x);
            mx = max(mx, x);
            m[x]++;
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            const int x = arr[i] - arr[i - 1];
            if (mn == x)
            {
                if (m[mn] == 1)
                {
                    ans = arr[i] - mx;
                }
            }
            else
            {
                if (m[mx] == 1)
                {
                    ans = arr[i] - mn;
                }
            }
        }
        return ans;
    }
};
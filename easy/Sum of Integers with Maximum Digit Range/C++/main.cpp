// Problem: Sum of Integers with Maximum Digit Range
// Link to the problem: https://leetcode.com/problems/sum-of-integers-with-maximum-digit-range/
class Solution
{
public:
    int maxDigitRange(vector<int> &nums)
    {
        const int n = nums.size();
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            int mn = 10, mx = 0;
            while (x > 0)
            {
                const int y = x % 10;
                mn = min(mn, y);
                mx = max(mx, y);
                x /= 10;
            }
            m[mx - mn].push_back(nums[i]);
        }
        const vector<int> a = m.rbegin()->second;
        int ans = 0;
        for (const int i : a)
        {
            ans += i;
        }
        return ans;
    }
};
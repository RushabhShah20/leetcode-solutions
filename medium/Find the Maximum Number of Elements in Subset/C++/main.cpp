// Problem: Find the Maximum Number of Elements in Subset
// Link to the problem: https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/
class Solution
{
public:
    int maximumLength(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_map<long long, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        int ans = m[1] - !(m[1] & 1);
        m.erase(1);
        for (const pair<long long, int> i : m)
        {
            int x = 0;
            long long y = i.first;
            while (m.count(y) && m[y] > 1)
            {
                x += 2;
                y *= y;
            }
            ans = max(ans, x + (m.count(y) ? 1 : -1));
        }
        return max(ans, 1);
    }
};
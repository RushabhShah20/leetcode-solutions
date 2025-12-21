// Problem: Maximum Sum of Three Numbers Divisible by Three
// Link to the problem: https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three/
class Solution
{
public:
    int maximumSum(vector<int> &nums)
    {
        vector<vector<int>> m(3);
        for (const int num : nums)
        {
            m[num % 3].push_back(num);
        }
        for (vector<int> &i : m)
        {
            sort(i.begin(), i.end(), greater<int>());
        }
        int a = 0, b = 0, c = 0, d = 0;
        if (m[0].size() >= 3)
        {
            a = m[0][0] + m[0][1] + m[0][2];
        }
        if (m[1].size() >= 3)
        {
            b = m[1][0] + m[1][1] + m[1][2];
        }
        if (m[2].size() >= 3)
        {
            c = m[2][0] + m[2][1] + m[2][2];
        }
        if (m[0].size() >= 1 && m[1].size() >= 1 && m[2].size() >= 1)
        {
            d = m[0][0] + m[1][0] + m[2][0];
        }
        const int ans = max({a, b, c, d});
        return ans;
    }
};
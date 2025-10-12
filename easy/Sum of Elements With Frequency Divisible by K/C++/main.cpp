// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
class Solution
{
public:
    int sumDivisibleByK(vector<int> &nums, int k)
    {
        map<int, int> m;
        for (int num : nums)
        {
            m[num]++;
        }
        int ans = 0;
        for (pair<int, int> i : m)
        {
            if (i.second % k == 0)
            {
                ans += (i.first * i.second);
            }
        }
        return ans;
    }
};
// Problem: Smallest Missing Non-negative Integer After Operations
// Link to the problem: https://leetcode.com/problems/smallest-missing-non-negative-integer-after-operations/
class Solution
{
public:
    int findSmallestInteger(vector<int> &nums, int value)
    {
        int ans = 0;
        map<int, int> m;
        for (int num : nums)
        {
            m[((num % value) + value) % value]++;
        }
        while (m[ans % value] > 0)
        {
            m[ans % value]--;
            ans++;
        }
        return ans;
    }
};
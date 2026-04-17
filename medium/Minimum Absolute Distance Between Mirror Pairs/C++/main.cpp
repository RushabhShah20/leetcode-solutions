// Problem: Minimum Absolute Distance Between Mirror Pairs
// Link to the problem: https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs/
class Solution
{
public:
    int rev(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = INT_MAX;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (m.count(nums[i]))
            {
                ans = min(ans, i - m[nums[i]]);
            }
            m[rev(nums[i])] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
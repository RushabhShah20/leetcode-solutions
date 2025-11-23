// Problem: Find Maximum Balanced XOR Subarray Length
// Link to the problem: https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length/
class Solution
{
public:
    int maxBalancedSubarray(vector<int> &nums)
    {
        map<pair<int, int>, int> m;
        m[{0, 0}] = -1;
        long long currentXor = 0;
        int diff = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currentXor ^= nums[i];
            if (nums[i] % 2 != 0)
            {
                diff++;
            }
            else
            {
                diff--;
            }
            if (m.find({currentXor, diff}) != m.end())
            {
                ans = max(ans, i - m[{currentXor, diff}]);
            }
            else
            {
                m[{currentXor, diff}] = i;
            }
        }
        return ans;
    }
};
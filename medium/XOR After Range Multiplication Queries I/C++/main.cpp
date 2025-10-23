// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
class Solution
{
public:
    int xorAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        int mod = 1e9 + 7;
        for (vector<int> query : queries)
        {
            for (int i = query[0]; i <= query[1]; i += query[2])
            {
                nums[i] = (int)(((long long)nums[i] * (long long)query[3]) % mod);
            }
        }
        int ans = 0;
        for (int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};
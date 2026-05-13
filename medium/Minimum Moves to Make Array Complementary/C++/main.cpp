// Problem: Minimum Moves to Make Array Complementary
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-make-array-complementary/
class Solution
{
public:
    int minMoves(vector<int> &nums, int limit)
    {
        const int n = nums.size();
        vector<int> a(2 * limit + 2, 0);
        for (int i = 0; i < n / 2; i++)
        {
            const int j = min(nums[i], nums[n - i - 1]), k = max(nums[i], nums[n - i - 1]);
            a[2] += 2;
            a[j + 1] -= 1;
            a[j + k] -= 1;
            a[j + k + 1] += 1;
            a[k + limit + 1] += 1;
        }
        int ans = n, z = 0;
        for (int i = 2; i <= 2 * limit; i++)
        {
            z += a[i];
            ans = min(ans, z);
        }
        return ans;
    }
};
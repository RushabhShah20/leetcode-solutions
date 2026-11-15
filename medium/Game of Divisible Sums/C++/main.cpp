// Problem: Game of Divisible Sums
// Link to the problem: https://leetcode.com/problems/game-of-divisible-sums/
class Solution
{
public:
    long long maxDifference(vector<int> &nums)
    {
        const int n = nums.size();
        long long x = nums[n - 1], y = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            const long long a = nums[i], b = a + nums[i + 1];
            const long long z = max(a + (a % 3 == 0 ? -x : x), b + (b % 3 == 0 ? -y : y));
            y = x;
            x = z;
        }
        const long long ans = x;
        return ans;
    }
};
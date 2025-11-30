// Problem: Make Sum Divisible by P
// Link to the problem: https://leetcode.com/problems/make-sum-divisible-by-p/
class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        long long sum = 0;
        for (const long long num : nums)
        {
            sum += num;
        }
        if (sum % p == 0)
        {
            return 0;
        }
        long long ans = nums.size(), cur = 0, n = nums.size();
        map<long long, long long> m;
        m[0] = -1;
        for (long long i = 0; i < n; i++)
        {
            cur = (cur + nums[i]) % p;
            long long prefix = ((cur - (sum % p) + p) % p);
            if (m.count(prefix) != 0)
            {
                long long x = i - m[prefix];
                ans = min(ans, x);
            }
            m[cur] = i;
        }
        if (ans == nums.size())
        {
            return -1;
        }
        else
        {
            return (int)(ans);
        }
    }
};
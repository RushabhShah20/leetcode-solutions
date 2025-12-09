// Problem: Count Special Triplets
// Link to the problem: https://leetcode.com/problems/count-special-triplets/
class Solution
{
public:
    int specialTriplets(vector<int> &nums)
    {
        long long mod = 1000000007;
        unordered_map<int, int> x, y;
        for (const int num : nums)
        {
            x[num]++;
        }
        long long ans = 0;
        for (const int num : nums)
        {
            long long z = ((long long)(num) * (long long)(2));
            long long a = y[z];
            y[num]++;
            long long b = x[z] - y[z];
            ans = ((ans + a * b) % mod);
        }
        return ans;
    }
};
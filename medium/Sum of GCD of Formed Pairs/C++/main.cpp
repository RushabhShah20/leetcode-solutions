// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
class Solution
{
public:
    long long gcdSum(vector<int> &nums)
    {
        const int n = nums.size();
        int mx = 0;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            a.push_back(__gcd(mx, nums[i]));
        }
        long long ans = 0;
        sort(a.begin(), a.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            ans += __gcd(a[i], a[j]);
            i++;
            j--;
        }
        return ans;
    }
};
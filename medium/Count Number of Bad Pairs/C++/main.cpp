// Problem: Count Number of Bad Pairs
// Link to the problem: https://leetcode.com/problems/count-number-of-bad-pairs/
class Solution
{
public:
    long long nc2(int n)
    {
        return (((long long)(n) * (long long)(n - 1)) / 2);
    }
    long long countBadPairs(vector<int> &nums)
    {
        long long ans = 0, n = nums.size();
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i] - i]++;
        }
        for (auto i : x)
        {
            ans -= nc2(i.second);
        }
        ans += nc2(n);
        return ans;
    }
};
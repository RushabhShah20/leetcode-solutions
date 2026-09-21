// Problem: Find X Value of Array I
// Link to the problem: https://leetcode.com/problems/find-x-value-of-array-i/
class Solution
{
public:
    vector<long long> resultArray(vector<int> &nums, int k)
    {
        const int n = nums.size();
        vector<long long> ans(k), a(k);
        for (int i = 0; i < n; i++)
        {
            vector<long long> b(k);
            b[nums[i] % k]++;
            for (int j = 0; j < k; j++)
            {
                b[(long long)j * nums[i] % k] += a[j];
            }
            a = b;
            for (int j = 0; j < k; j++)
            {
                ans[j] += a[j];
            }
        }
        return ans;
    }
};
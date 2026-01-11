// Problem: Maximum Bitwise AND After Increment Operations
// Link to the problem: https://leetcode.com/problems/maximum-bitwise-and-after-increment-operations/
class Solution
{
public:
    long long cost(int x, int t)
    {
        long long y = 0;
        bool z = true;
        for (int j = 30; j >= 0; j--)
        {
            if (z && (t & (1 << j)) && !(x & (1 << j)))
            {
                z = false;
            }
            if (z)
            {
                y |= (x & (1 << j));
            }
            else
            {
                y |= (t & (1 << j));
            }
        }
        return y - x;
    }
    int maximumAND(vector<int> &nums, int k, int m)
    {
        const int n = nums.size();
        int ans = 0;
        for (int j = 30; j >= 0; j--)
        {
            vector<long long> a;
            for (int i = 0; i < n; i++)
            {
                a.push_back(cost(nums[i], (ans | (1 << j))));
            }
            sort(a.begin(), a.end());
            long long sum = 0;
            for (int i = 0; i < m; i++)
            {
                sum += a[i];
                if (sum > k)
                {
                    break;
                }
            }
            if (sum <= k)
            {
                ans |= (1 << j);
            }
        }
        return ans;
    }
};
// Problem: Trionic Array II
// Link to the problem: https://leetcode.com/problems/trionic-array-ii/
class Solution
{
public:
    long long maxSumTrionic(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = LLONG_MIN;
        int i = 0;
        while (i < n)
        {
            int j = i + 1;
            while (j < n && nums[j] > nums[j - 1])
            {
                j++;
            }
            const int p = j - 1;
            if (p == i)
            {
                i++;
                continue;
            }
            j = p + 1;
            while (j < n && nums[j] < nums[j - 1])
            {
                j++;
            }
            const int q = j - 1;
            if (q == p)
            {
                i = p;
                continue;
            }
            j = q + 1;
            while (j < n && nums[j] > nums[j - 1])
            {
                j++;
            }
            const int r = j - 1;
            if (r == q)
            {
                i = q;
                continue;
            }
            long long sum = 0;
            for (int k = p; k <= q; k++)
            {
                sum += nums[k];
            }
            long long maxL = LLONG_MIN, curr = 0;
            for (int k = p - 1; k >= i; k--)
            {
                curr += nums[k];
                maxL = max(maxL, curr);
            }
            long long maxR = LLONG_MIN;
            curr = 0;
            for (int k = q + 1; k <= r; k++)
            {
                curr += nums[k];
                maxR = max(maxR, curr);
            }
            ans = max(ans, sum + maxL + maxR);
            i = q;
        }
        return ans == LLONG_MIN ? -1 : (ans);
    }
};

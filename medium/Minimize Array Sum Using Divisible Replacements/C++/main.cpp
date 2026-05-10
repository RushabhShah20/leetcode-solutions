// Problem: Minimize Array Sum Using Divisible Replacements
// Link to the problem: https://leetcode.com/problems/minimize-array-sum-using-divisible-replacements/
class Solution
{
public:
    long long minArraySum(vector<int> &nums)
    {
        const int n = nums.size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
        }
        vector<int> a(mx + 1);
        vector<bool> b(mx + 1);
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
            b[nums[i]] = true;
        }
        vector<long long> c(mx + 1);
        for (int i = 1; i <= mx; i++)
        {
            c[i] = i;
        }
        for (int i = 1; i <= mx; i++)
        {
            if (b[i])
            {
                for (int j = 2 * i; j <= mx; j += i)
                {
                    if (b[j] && c[j] == j)
                    {
                        c[j] = i;
                    }
                }
            }
        }
        long long ans = 0;
        for (int i = 1; i <= mx; i++)
        {
            if (a[i] > 0)
            {
                ans += c[i] * a[i];
            }
        }
        return ans;
    }
};
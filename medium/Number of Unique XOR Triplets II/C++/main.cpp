// Problem: Number of Unique XOR Triplets II
// Link to the problem: https://leetcode.com/problems/number-of-unique-xor-triplets-ii/
class Solution
{
public:
    int uniqueXorTriplets(vector<int> &nums)
    {
        const int n = nums.size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
        }
        int m = 1;
        while (m <= mx)
        {
            m <<= 1;
        }
        vector<int> a(m), b(m), c(m);
        for (int i = 0; i < n; i++)
        {
            a[nums[i]] = 1;
            for (int j = 0; j < m; j++)
            {
                if (a[j])
                {
                    b[j ^ nums[i]] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[j])
                {
                    c[j ^ nums[i]] = 1;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            ans += c[i] ? 1 : 0;
        }
        return ans;
    }
};
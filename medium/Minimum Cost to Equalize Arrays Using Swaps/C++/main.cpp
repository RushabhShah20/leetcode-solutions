// Problem: Minimum Cost to Equalize Arrays Using Swaps
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-equalize-arrays-using-swaps/
class Solution
{
public:
    int minCost(vector<int> &nums1, vector<int> &nums2)
    {
        const int n = nums1.size();
        vector<int> a(80001), b(80001);
        for (int i = 0; i < n; i++)
        {
            a[nums1[i]]++;
            b[nums1[i]]++;
            b[nums2[i]]++;
        }
        for (int i = 1; i <= 80000; i++)
        {
            if (b[i] % 2 != 0)
            {
                return -1;
            }
        }
        int ans = 0;
        for (int i = 1; i <= 80000; i++)
        {
            if (a[i] > 0)
            {
                const int x = (b[i] / 2);
                if (a[i] > x)
                {
                    ans += (a[i] - x);
                }
            }
        }
        return ans;
    }
};

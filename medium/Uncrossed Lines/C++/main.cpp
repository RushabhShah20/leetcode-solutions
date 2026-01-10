// Problem: Uncrossed Lines
// Link to the problem: https://leetcode.com/problems/uncrossed-lines/
class Solution
{
public:
    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
    {
        const int n1 = nums1.size(), n2 = nums2.size();
        vector<int> dp1(n2 + 1), dp2(n2 + 1);
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    dp2[j] = 1 + dp1[j - 1];
                }
                else
                {
                    dp2[j] = max(dp2[j - 1], dp1[j]);
                }
            }
            dp1 = dp2;
        }
        const int ans = dp2[n2];
        return ans;
    }
};
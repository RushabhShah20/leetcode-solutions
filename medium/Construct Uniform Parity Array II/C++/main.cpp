// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
class Solution
{
public:
    bool uniformArray(vector<int> &nums1)
    {
        const int n = nums1.size();
        bool x = true;
        int mn = 1000000001;
        for (int i = 0; i < n; i++)
        {
            const int num = nums1[i];
            if (num & 1)
            {
                x = false;
            }
            mn = min(mn, num);
        }
        const bool ans = mn & 1 || x ? true : false;
        return ans;
    }
};
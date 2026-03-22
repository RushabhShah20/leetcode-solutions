// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
class Solution
{
public:
    bool uniformArray(vector<int> &nums1)
    {
        bool x = true;
        int mn = INT_MAX;
        for (const int num : nums1)
        {
            if (num % 2 != 0)
            {
                x = false;
            }
            mn = min(mn, num);
        }
        if (mn % 2 != 0 || x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
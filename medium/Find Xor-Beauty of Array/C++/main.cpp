// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
class Solution
{
public:
    int xorBeauty(vector<int> &nums)
    {
        int ans = 0;
        for (const int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};
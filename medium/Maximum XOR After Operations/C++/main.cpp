// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
class Solution
{
public:
    int maximumXOR(vector<int> &nums)
    {
        int ans = 0;
        for (const int num : nums)
        {
            ans |= num;
        }
        return ans;
    }
};
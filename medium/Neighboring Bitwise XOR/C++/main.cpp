// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {
        int ans = 1;
        for (const int derive : derived)
        {
            ans ^= derive;
        }
        return ans;
    }
};
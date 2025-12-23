// Problem: Find XOR Sum of All Pairs Bitwise AND
// Link to the problem: https://leetcode.com/problems/find-xor-sum-of-all-pairs-bitwise-and/
class Solution
{
public:
    int getXORSum(vector<int> &arr1, vector<int> &arr2)
    {
        int x = 0, y = 0;
        for (const int i : arr1)
        {
            x ^= i;
        }
        for (const int i : arr2)
        {
            y ^= i;
        }
        const int ans = x & y;
        return ans;
    }
};
// Problem: Number of Unique XOR Triplets I
// Link to the problem: https://leetcode.com/problems/number-of-unique-xor-triplets-i/
class Solution
{
public:
    int uniqueXorTriplets(vector<int> &nums)
    {
        const int n = nums.size(), ans = n <= 2 ? n : 1 << __bit_width(n);
        return ans;
    }
};
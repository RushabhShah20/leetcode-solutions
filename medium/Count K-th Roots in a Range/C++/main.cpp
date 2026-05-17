// Problem: Count K-th Roots in a Range
// Link to the problem: https://leetcode.com/problems/count-k-th-roots-in-a-range/
class Solution
{
public:
    int countKthRoots(int l, int r, int k)
    {
        const int x = floor(pow(r, 1.0 / k) + 1e-9), y = ceil(pow(l, 1.0 / k) - 1e-9), ans = max(0, x - y + 1);
        return ans;
    }
};
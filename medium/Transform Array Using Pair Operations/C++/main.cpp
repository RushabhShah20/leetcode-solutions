// Problem: Transform Array Using Pair Operations
// Link to the problem: https://leetcode.com/problems/transform-array-using-pair-operations/
class Solution
{
public:
    bool canTransform(vector<int> &source, vector<int> &target)
    {
        const int n = source.size();
        long long x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            x += source[i];
            y += target[i];
        }
        const bool ans = x == y;
        return ans;
    }
};
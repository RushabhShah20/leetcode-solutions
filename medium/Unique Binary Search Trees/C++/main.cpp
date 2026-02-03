// Problem: Unique Binary Search Trees
// Link to the problem: https://leetcode.com/problems/unique-binary-search-trees/
class Solution
{
public:
    int numTrees(int n)
    {
        unsigned long long ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans *= (2 * n - i);
            ans /= (i + 1);
        }
        ans /= (n + 1);
        return ans;
    }
};
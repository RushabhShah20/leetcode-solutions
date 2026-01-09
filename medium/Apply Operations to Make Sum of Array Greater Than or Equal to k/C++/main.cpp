// Problem: Apply Operations to Make Sum of Array Greater Than or Equal to k
// Link to the problem: https://leetcode.com/problems/apply-operations-to-make-sum-of-array-greater-than-or-equal-to-k/
class Solution
{
public:
    int minOperations(int k)
    {
        int n = sqrt(k);
        const int ans = (n + ((k - 1) / n) - 1);
        return ans;
    }
};
// Problem: Make Array Zero by Subtracting Equal Amounts
// Link to the problem: https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        if (s.find(0) != s.end())
        {
            return s.size() - 1;
        }
        else
        {
            return s.size();
        }
    }
};
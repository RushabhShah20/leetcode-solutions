// Problem: Keep Multiplying Found Values by Two
// Link to the problem: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        while (find(nums.begin(), nums.end(), original) - nums.begin() < nums.size())
        {
            original = original * 2;
        }
        return original;
    }
};
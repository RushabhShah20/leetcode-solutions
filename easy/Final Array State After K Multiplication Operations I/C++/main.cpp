// Problem: Final Array State After K Multiplication Operations I
// Link to the problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
class Solution
{
public:
    vector<int> getFinalState(vector<int> &nums, int k, int multiplier)
    {
        for (int i = 0; i < k; i++)
        {
            int min = *min_element(nums.begin(), nums.end());
            int index = find(nums.begin(), nums.end(), min) - nums.begin();
            nums[index] = min * multiplier;
        }
        return nums;
    }
};
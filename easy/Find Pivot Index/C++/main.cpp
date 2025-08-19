// Problem: Find Pivot Index
// Link to the problem: https://leetcode.com/problems/find-pivot-index/
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> prefix(nums.begin(), nums.begin() + i), suffix(nums.begin() + i + 1, nums.end());
            int prefixSum = 0, suffixSum = 0;
            for (int j = 0; j < prefix.size(); j++)
            {
                prefixSum += prefix[j];
            }
            for (int j = 0; j < suffix.size(); j++)
            {
                suffixSum += suffix[j];
            }
            if (prefixSum == suffixSum)
            {
                return i;
            }
        }
        return -1;
    }
};
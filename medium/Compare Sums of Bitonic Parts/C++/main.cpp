// Problem: Compare Sums of Bitonic Parts
// Link to the problem: https://leetcode.com/problems/compare-sums-of-bitonic-parts/
class Solution
{
public:
    int compareBitonicSums(vector<int> &nums)
    {
        const int n = nums.size(), j = max_element(nums.begin(), nums.end()) - nums.begin();
        long long x = 0, y = 0;
        for (int i = 0; i <= j; i++)
        {
            x += nums[i];
        }
        for (int i = j; i < n; i++)
        {
            y += nums[i];
        }
        if (x > y)
        {
            return 0;
        }
        else if (x < y)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
};
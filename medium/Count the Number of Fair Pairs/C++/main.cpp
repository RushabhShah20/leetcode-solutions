// Problem: Count the Number of Fair Pairs
// Link to the problem: https://leetcode.com/problems/count-the-number-of-fair-pairs/
class Solution
{
public:
    long long countFairPairs(vector<int> &nums, int lower, int upper)
    {
        long long upperSum = 0, lowerSum = 0;
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] <= upper)
            {
                upperSum += (j - i);
                i++;
            }
            else
            {
                j--;
            }
        }
        i = 0;
        j = n - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] < lower)
            {
                lowerSum += (j - i);
                i++;
            }
            else
            {
                j--;
            }
        }
        const long long ans = upperSum - lowerSum;
        return ans;
    }
};
// Problem: Number of Unequal Triplets in Array
// Link to the problem: https://leetcode.com/problems/number-of-unequal-triplets-in-array/
class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k])
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
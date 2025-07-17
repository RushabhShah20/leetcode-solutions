// Problem: Minimum Pair Removal to Sort Array I
// Link to the problem: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/
class Solution
{
public:
    int minimumPairRemoval(vector<int> &nums)
    {
        int ans = 0;
        while (!is_sorted(nums.begin(), nums.end()))
        {
            int min_sum = nums[0] + nums[1];
            for (int i = 1; i < nums.size() - 1; i++)
            {
                int curr_sum = nums[i] + nums[i + 1];
                min_sum = min(min_sum, curr_sum);
            }
            for (int i = 0; i < nums.size() - 1; i++)
            {
                int curr_sum = nums[i] + nums[i + 1];
                if (curr_sum == min_sum)
                {
                    nums.erase(nums.begin() + i, nums.begin() + i + 2);
                    nums.insert(nums.begin() + i, curr_sum);
                    break;
                }
            }
            ans++;
        }
        return ans;
    }
};
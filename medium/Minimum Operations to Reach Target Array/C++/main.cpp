// Problem: Minimum Operations to Reach Target Array
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-reach-target-array/
class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &target)
    {
        const int n = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != target[i])
            {
                s.insert(nums[i]);
            }
        }
        const int ans = s.size();
        return ans;
    }
};
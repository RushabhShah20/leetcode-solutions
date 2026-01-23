// Problem: Two Sum
// Link to the problem: https://leetcode.com/problems/two-sum/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        const int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int dif = target - nums[i];
            if (m.count(dif))
            {
                return {m[dif], i};
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return {0, 0};
    }
};
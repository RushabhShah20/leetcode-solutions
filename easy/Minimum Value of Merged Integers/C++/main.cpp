// Problem: Minimum Value of Merged Integers
// Link to the problem: https://leetcode.com/problems/minimum-value-of-merged-integers/
class Solution
{
public:
    int minMergedInteger(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 10001001;
        for (int i = 0; i < n; i += 2)
        {
            const int x = stoi(to_string(nums[i]) + to_string(nums[i + 1]));
            ans = min(ans, x);
        }
        return ans;
    }
};
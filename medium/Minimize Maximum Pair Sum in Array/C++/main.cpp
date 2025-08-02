// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 0; i < n / 2; i++)
        {
            int x = nums[i] + nums[n - 1 - i];
            ans.push_back(x);
        }
        return *max_element(ans.begin(), ans.end());
    }
};
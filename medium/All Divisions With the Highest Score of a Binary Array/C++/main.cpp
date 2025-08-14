// Problem: All Divisions With the Highest Score of a Binary Array
// Link to the problem: https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array/
class Solution
{
public:
    vector<int> maxScoreIndices(vector<int> &nums)
    {
        vector<int> a(nums.size() + 1, 0), prefix(nums.size() + 1, 0), suffix(nums.size() + 1, 0);
        prefix[0] = 0;
        if (nums[0] == 0)
        {
            prefix[1]++;
        }
        for (int i = 2; i <= nums.size(); i++)
        {
            if (nums[i - 1] == 0)
            {
                prefix[i] = prefix[i - 1] + 1;
            }
            else
            {
                prefix[i] = prefix[i - 1];
            }
        }
        suffix[nums.size()] = 0;
        if (nums[nums.size() - 1] == 1)
        {
            suffix[nums.size() - 1]++;
        }
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] == 1)
            {
                suffix[i] = suffix[i + 1] + 1;
            }
            else
            {
                suffix[i] = suffix[i + 1];
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = prefix[i] + suffix[i];
        }
        int x = *max_element(a.begin(), a.end());
        vector<int> ans;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == x)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
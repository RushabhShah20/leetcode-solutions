// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> freq(101, 0);
        for (const int &num : nums)
        {
            freq[num]++;
        }
        for (int i = 1; i < 101; i++)
        {
            freq[i] += freq[i - 1];
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = freq[nums[i] - 1];
            }
        }
        return ans;
    }
};
// Problem: Maximize Greatness of an Array
// Link to the problem: https://leetcode.com/problems/maximize-greatness-of-an-array/
class Solution
{
public:
    int maximizeGreatness(vector<int> &nums)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0, i = 0, j = 0;
        while (j < n)
        {
            if (nums[i] < nums[j])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};
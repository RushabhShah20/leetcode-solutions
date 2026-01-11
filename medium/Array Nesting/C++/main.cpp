// Problem: Array Nesting
// Link to the problem: https://leetcode.com/problems/array-nesting/
class Solution
{
public:
    int arrayNesting(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int j = i;
            while (nums[j] < n)
            {
                int k = nums[j];
                nums[j] = n;
                j = k;
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
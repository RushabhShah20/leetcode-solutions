// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        const int n = nums.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[x])
            {
                x = i;
            }
            else if (nums[i] < nums[y])
            {
                y = i;
            }
        }
        const int a = max(x, y) + 1;
        const int b = n - min(x, y);
        const int c = (min(x, y) + 1) + (n - max(x, y));
        const int ans = min({a, b, c});
        return ans;
    }
};
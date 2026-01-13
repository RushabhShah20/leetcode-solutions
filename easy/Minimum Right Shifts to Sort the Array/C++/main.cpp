// Problem: Minimum Right Shifts to Sort the Array
// Link to the problem: https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/
class Solution
{
public:
    int minimumRightShifts(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, prev = nums[0];
        bool x = false;
        for (int i = 1; i <= n; i++)
        {
            if (nums[i % n] < prev)
            {
                if (x == true)
                {
                    return -1;
                }
                x = true;
                ans = n - i;
            }
            prev = nums[i % n];
        }
        return ans;
    }
};
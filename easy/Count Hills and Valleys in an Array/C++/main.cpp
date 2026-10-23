// Problem: Count Hills and Valleys in an Array
// Link to the problem: https://leetcode.com/problems/count-hills-and-valleys-in-an-array/
class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (a.empty() || a.back() != nums[i])
            {
                a.push_back(nums[i]);
            }
        }
        const int m = a.size();
        int ans = 0;
        for (int i = 1; i < m - 1; i++)
        {
            ans += (a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]);
        }
        return ans;
    }
};

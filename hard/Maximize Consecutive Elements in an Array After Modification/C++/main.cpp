// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
class Solution
{
public:
    int maxSelectedElements(vector<int> &nums)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> a(1000001);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            const int x = nums[i];
            a[x + 1] = max(a[x + 1], a[x] + 1);
            a[x] = max(a[x], a[x - 1] + 1);
            ans = max(ans, max(a[x], a[x + 1]));
        }
        return ans;
    }
};
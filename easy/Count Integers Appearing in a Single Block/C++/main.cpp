// Problem: Count Integers Appearing in a Single Block
// Link to the problem: https://leetcode.com/problems/count-integers-appearing-in-a-single-block/
class Solution
{
public:
    int countSpecialIntegers(vector<int> &nums)
    {
        const int n = nums.size();
        vector<pair<int, int>> a(100);
        for (int i = 0; i < 100; i++)
        {
            a[i] = {n + 1, -1};
        }
        for (int i = 0; i < n; i++)
        {
            a[nums[i] - 1].first = min(a[nums[i] - 1].first, i);
            a[nums[i] - 1].second = max(a[nums[i] - 1].second, i);
        }
        int ans = 0;
        for (int i = 0; i < 100; i++)
        {
            if (a[i].first == n + 1 && a[i].second == -1)
            {
                continue;
            }
            bool x = true;
            for (int j = a[i].first; j <= a[i].second; j++)
            {
                if (nums[j] != i + 1)
                {
                    x = false;
                    break;
                }
            }
            ans += x ? 1 : 0;
        }
        return ans;
    }
};
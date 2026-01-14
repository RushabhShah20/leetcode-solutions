// Problem: Number of Perfect Pairs
// Link to the problem: https://leetcode.com/problems/number-of-perfect-pairs/
class Solution
{
public:
    long long perfectPairs(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b)
             { return abs(a) < abs(b); });
        const int n = nums.size();
        long long ans = 0;
        int i = 0, j = 1;
        while (i < n)
        {
            while (j < n && abs(nums[j]) <= 2 * abs(nums[i]))
            {
                j++;
            }
            ans += (j - i - 1);
            i++;
        }
        return ans;
    }
};
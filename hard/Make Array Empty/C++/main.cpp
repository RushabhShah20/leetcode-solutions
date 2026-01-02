// Problem: Make Array Empty
// Link to the problem: https://leetcode.com/problems/make-array-empty/
class Solution
{
public:
    long long countOperationsToEmptyArray(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 1;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] = i;
        }
        sort(nums.begin(), nums.end());
        for (int i = n - 2; i >= 0; i--)
        {
            if (m[nums[i]] > m[nums[i + 1]])
            {
                ans += (n - i);
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};
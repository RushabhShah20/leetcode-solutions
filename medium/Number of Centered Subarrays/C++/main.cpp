// Problem: Number of Centered Subarrays
// Link to the problem: https://leetcode.com/problems/number-of-centered-subarrays/
class Solution
{
public:
    int centeredSubarrays(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            unordered_set<int> s;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                s.insert(nums[j]);
                if (s.find(sum) != s.end())
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
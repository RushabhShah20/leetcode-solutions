// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
class Solution
{
public:
    long long countAlternatingSubarrays(vector<int> &nums)
    {
        long long ans = 0, count = 1;
        vector<int> a;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                count++;
            }
            else
            {
                a.push_back(count);
                count = 1;
            }
        }
        a.push_back(count);
        for (int i = 0; i < a.size(); i++)
        {
            ans += (((long long)(a[i]) * (long long)(a[i] + 1)) / 2);
        }
        return ans;
    }
};
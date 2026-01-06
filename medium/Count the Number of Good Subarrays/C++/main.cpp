// Problem: Count the Number of Good Subarrays
// Link to the problem: https://leetcode.com/problems/count-the-number-of-good-subarrays/
class Solution
{
public:
    long long countGood(vector<int> &nums, int k)
    {
        const int n = nums.size();
        long long ans = 0, total = 0;
        unordered_map<int, int> m;
        int i = 0, j = 0;
        while (j < n)
        {
            total += m[nums[j]];
            m[nums[j]]++;
            while (total >= k && i <= j)
            {
                ans += (n - j);
                m[nums[i]]--;
                total -= m[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};
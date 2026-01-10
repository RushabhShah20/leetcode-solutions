// Problem: Count Subarrays Where Max Element Appears at Least K Times
// Link to the problem: https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        const int n = nums.size();
        long long ans = 0;
        int maxVal = *max_element(nums.begin(), nums.end()), i = 0, j = 0, countMax = 0;
        while (j < n)
        {
            if (nums[j] == maxVal)
            {
                countMax++;
                while (countMax >= k && i < n)
                {
                    ans += (n - j);
                    if (nums[i] == maxVal)
                    {
                        countMax--;
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};
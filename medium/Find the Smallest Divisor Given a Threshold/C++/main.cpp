// Problem: Find the Smallest Divisor Given a Threshold
// Link to the problem: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int start = 1, end = *max_element(nums.begin(), nums.end());
        int ans = end;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            long long sum = 0;
            for (const int num : nums)
            {
                sum += ((num % mid == 0) ? (num / mid) : ((num / mid) + 1));
            }
            if (sum <= threshold)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
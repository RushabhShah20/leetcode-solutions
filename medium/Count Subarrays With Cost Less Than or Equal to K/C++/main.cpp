// Problem: Count Subarrays With Cost Less Than or Equal to K
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-cost-less-than-or-equal-to-k/
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, long long k)
    {
        const int n = nums.size();
        long long ans = 0;
        int l = 0;
        deque<long long> minDQ, maxDQ;
        for (int r = 0; r < n; r++)
        {
            while (!maxDQ.empty() && nums[maxDQ.back()] <= nums[r])
            {
                maxDQ.pop_back();
            }
            maxDQ.push_back(r);
            while (!minDQ.empty() && nums[minDQ.back()] >= nums[r])
            {
                minDQ.pop_back();
            }
            minDQ.push_back(r);
            while (l <= r)
            {
                const int currMax = nums[maxDQ.front()];
                const int currMin = nums[minDQ.front()];
                const long long currCost = (long long)(currMax - currMin) * (long long)((r - l + 1));
                if (currCost <= k)
                {
                    break;
                }
                l++;
                if (maxDQ.front() < l)
                {
                    maxDQ.pop_front();
                }
                if (minDQ.front() < l)
                {
                    minDQ.pop_front();
                }
            }
            ans += (r - l + 1);
        }
        return ans;
    }
};
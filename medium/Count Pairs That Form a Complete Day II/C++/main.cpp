// Problem: Count Pairs That Form a Complete Day II
// Link to the problem: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-ii/
class Solution
{
public:
    long long countCompleteDayPairs(vector<int> &hours)
    {
        long long ans = 0;
        vector<int> hourFreq(24, 0);
        for (const int &hour : hours)
        {
            hourFreq[hour % 24]++;
        }
        ans += ((long long)(hourFreq[0]) * (long long)(hourFreq[0] - 1) / (long long)(2));
        ans += ((long long)(hourFreq[12]) * (long long)(hourFreq[12] - 1) / (long long)(2));
        for (int i = 1; i < 12; i++)
        {
            ans += ((long long)(hourFreq[i]) * (long long)(hourFreq[24 - i]));
        }
        return ans;
    }
};
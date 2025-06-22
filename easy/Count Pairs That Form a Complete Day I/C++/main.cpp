// Problem: Count Pairs That Form a Complete Day I
// Link to the problem: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/
class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {
        int ans = 0, n = hours.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((hours[i] + hours[j]) % 24 == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
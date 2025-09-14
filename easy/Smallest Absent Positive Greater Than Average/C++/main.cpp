// Problem: Smallest Absent Positive Greater Than Average
// Link to the problem: https://leetcode.com/problems/smallest-absent-positive-greater-than-average/
class Solution
{
public:
    int smallestAbsent(vector<int> &nums)
    {
        int sum = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        int avg = (sum / n);
        int ans = 0;
        if (avg <= 0)
        {
            ans = 1;
        }
        else
        {
            ans = avg + 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ans == nums[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
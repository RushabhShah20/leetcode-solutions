// Problem: Find the Score Difference in a Game
// Link to the problem: https://leetcode.com/problems/find-the-score-difference-in-a-game/
class Solution
{
public:
    int scoreDifference(vector<int> &nums)
    {
        const int n = nums.size();
        bool a = true;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 != 0)
            {
                a = !a;
            }
            if (i % 6 == 5)
            {
                a = !a;
            }
            if (a)
            {
                ans += nums[i];
            }
            else
            {
                ans -= nums[i];
            }
        }
        return ans;
    }
};
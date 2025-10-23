// Problem: Minimum Impossible OR
// Link to the problem: https://leetcode.com/problems/minimum-impossible-or/
class Solution
{
public:
    int minImpossibleOR(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (s.find((int)pow(2, i)) == s.end())
            {
                ans = pow(2, i);
                break;
            }
        }
        return ans;
    }
};
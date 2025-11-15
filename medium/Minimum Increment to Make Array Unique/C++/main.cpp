// Problem: Minimum Increment to Make Array Unique
// Link to the problem: https://leetcode.com/problems/minimum-increment-to-make-array-unique/
class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> x;
        for (int num : nums)
        {
            x[num]++;
        }
        for (pair<int, int> i : x)
        {
            if (i.second > 1)
            {
                x[i.first] -= (i.second - 1);
                x[i.first + 1] += (i.second - 1);
                ans += (i.second - 1);
            }
        }
        return ans;
    }
};
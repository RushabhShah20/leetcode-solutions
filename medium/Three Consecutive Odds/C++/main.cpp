// Problem: Three Consecutive Odds
// Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                count = 0;
            }
            else
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
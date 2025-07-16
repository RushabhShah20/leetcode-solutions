// Problem: Relative Ranks
// Link to the problem: https://leetcode.com/problems/relative-ranks/
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<int> a(score.size(), 1);
        for (int i = 0; i < score.size(); i++)
        {
            for (int j = 0; j < score.size(); j++)
            {
                if (score[i] < score[j])
                {
                    a[i]++;
                }
            }
        }
        vector<string> ans(score.size());
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 1)
            {
                ans[i] = "Gold Medal";
            }
            else if (a[i] == 2)
            {
                ans[i] = "Silver Medal";
            }
            else if (a[i] == 3)
            {
                ans[i] = "Bronze Medal";
            }
            else
            {
                ans[i] = to_string(a[i]);
            }
        }
        return ans;
    }
};
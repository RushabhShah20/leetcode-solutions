// Problem: Score Validator
// Link to the problem: https://leetcode.com/problems/score-validator/
class Solution
{
public:
    vector<int> scoreValidator(vector<string> &events)
    {
        vector<int> ans(2, 0);
        for (const string &event : events)
        {
            if (ans[1] == 10)
            {
                break;
            }
            if (isdigit(event[0]))
            {
                ans[0] += event[0] - '0';
            }
            else
            {
                if (event.size() == 1)
                {
                    ans[1]++;
                }
                else
                {
                    ans[0]++;
                }
            }
        }
        return ans;
    }
};
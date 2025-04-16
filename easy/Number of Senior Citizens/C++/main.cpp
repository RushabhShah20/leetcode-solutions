// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int ans = 0;
        for (int i = 0; i < details.size(); i++)
        {
            if (stoi(details[i].substr(11, 2)) > 60)
            {
                ans++;
            }
        }
        return ans;
    }
};
// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        if (n == 0)
        {
            return vector<string>{""};
        }
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            const vector<string> l = generateParenthesis(i), r = generateParenthesis(n - 1 - i);
            for (int j = 0; j < l.size(); j++)
            {
                for (int k = 0; k < r.size(); k++)
                {
                    ans.push_back("(" + l[j] + ")" + r[k]);
                }
            }
        }
        return ans;
    }
};

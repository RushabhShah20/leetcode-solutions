// Problem: Brace Expansion II
// Link to the problem: https://leetcode.com/problems/brace-expansion-ii/
class Solution
{
public:
    void compress(vector<char> &a, vector<set<string>> &b)
    {
        const int n = b.size(), l = n - 2, r = n - 1;
        if (a.back() == '+')
        {
            b[l].insert(b[r].begin(), b[r].end());
        }
        else
        {
            set<string> z;
            for (const string &x : b[l])
            {
                for (const string &y : b[r])
                {
                    z.insert(x + y);
                }
            }
            b[l] = z;
        }
        a.pop_back();
        b.pop_back();
    }
    vector<string> braceExpansionII(string expression)
    {
        const int n = expression.size();
        vector<char> a;
        vector<set<string>> b;
        for (int i = 0; i < n; i++)
        {
            if (expression[i] == ',')
            {
                while (!a.empty() && a.back() == '*')
                {
                    compress(a, b);
                }
                a.push_back('+');
            }
            else if (expression[i] == '{')
            {
                if (i > 0 &&
                    (expression[i - 1] == '}' || isalpha(expression[i - 1])))
                {
                    a.push_back('*');
                }
                a.push_back('{');
            }
            else if (expression[i] == '}')
            {
                while (!a.empty() && a.back() != '{')
                {
                    compress(a, b);
                }
                a.pop_back();
            }
            else
            {
                if (i > 0 && (expression[i - 1] == '}' || isalpha(expression[i - 1])))
                {
                    a.push_back('*');
                }
                b.push_back({string(1, expression[i])});
            }
        }
        while (!a.empty())
        {
            compress(a, b);
        }
        const vector<string> ans(b.back().begin(), b.back().end());
        return ans;
    }
};
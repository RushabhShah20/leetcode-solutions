// Problem: Find Mismatched Segments Between Two Strings
// Link to the problem: https://leetcode.com/problems/find-mismatched-segments-between-two-strings/
class Solution
{
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2)
    {
        const int n = s1.size();
        vector<vector<string>> ans;
        string x, y;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                x.append(1, s1[i]);
                y.append(1, s2[i]);
            }
            else
            {
                if (!x.empty())
                {
                    const vector<string> a = {x, y};
                    ans.push_back(a);
                    x.clear();
                    y.clear();
                }
            }
        }
        if (!x.empty())
        {
            const vector<string> a = {x, y};
            ans.push_back(a);
        }
        return ans;
    }
};
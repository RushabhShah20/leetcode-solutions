// Problem: Find the Most Common Response
// Link to the problem: https://leetcode.com/problems/find-the-most-common-response/
class Solution
{
public:
    string findCommonResponse(vector<vector<string>> &responses)
    {
        map<string, int> x;
        for (int i = 0; i < responses.size(); i++)
        {
            set<string> y(responses[i].begin(), responses[i].end());
            for (auto s : y)
            {
                x[s]++;
            }
        }
        map<int, vector<string>> z;
        for (auto i : x)
        {
            z[i.second].push_back(i.first);
        }
        int maxFreq = 0;
        for (auto i : z)
        {
            maxFreq = max(maxFreq, i.first);
        }
        vector<string> ans = z[maxFreq];
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};
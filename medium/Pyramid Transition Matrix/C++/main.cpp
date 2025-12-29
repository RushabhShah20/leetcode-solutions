// Problem: Pyramid Transition Matrix
// Link to the problem: https://leetcode.com/problems/pyramid-transition-matrix/
class Solution
{
public:
    unordered_map<string, vector<char>> allowed_map;
    unordered_map<string, bool> dp;
    bool backTrack(const vector<vector<char>> &op, int idx, string curr)
    {
        if (idx == op.size())
        {
            return solve(curr);
        }
        for (const char &c : op[idx])
        {
            if (backTrack(op, idx + 1, curr + c))
            {
                return true;
            }
        }
        return false;
    }
    bool solve(string bottom)
    {
        int n = bottom.size();
        if (n == 1)
        {
            return true;
        }
        if (dp.count(bottom))
        {
            return dp[bottom];
        }
        vector<vector<char>> op;
        for (int i = 0; i < n - 1; i++)
        {
            string key = bottom.substr(i, 2);
            if (allowed_map.find(key) == allowed_map.end())
            {
                dp[bottom] = false;
                return dp[bottom];
            }
            op.push_back(allowed_map[key]);
        }
        dp[bottom] = backTrack(op, 0, "");
        return dp[bottom];
    }
    bool pyramidTransition(string bottom, vector<string> &allowed)
    {
        for (const string &allow : allowed)
        {
            allowed_map[allow.substr(0, 2)].push_back(allow[2]);
        }
        const bool ans = solve(bottom);
        return ans;
    }
};
// Problem: Execution of All Suffix Instructions Staying in a Grid
// Link to the problem: https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/
class Solution
{
public:
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {
        const int m = s.size();
        vector<int> ans(m);
        for (int i = 0; i < m; i++)
        {
            const string t = s.substr(i);
            vector<int> curPos = startPos;
            int count = 0;
            for (int j = 0; j < t.size(); j++)
            {
                if (t[j] == 'U')
                {
                    curPos[0]--;
                }
                if (t[j] == 'D')
                {
                    curPos[0]++;
                }
                if (t[j] == 'L')
                {
                    curPos[1]--;
                }
                if (t[j] == 'R')
                {
                    curPos[1]++;
                }
                if (curPos[0] < 0 || curPos[0] >= n || curPos[1] < 0 || curPos[1] >= n)
                {
                    break;
                }
                count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
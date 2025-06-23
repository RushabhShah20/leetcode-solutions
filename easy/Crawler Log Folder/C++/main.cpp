// Problem: Crawler Log Folder
// Link to the problem: https://leetcode.com/problems/crawler-log-folder/
class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        int ans = 0;
        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../")
            {
                (ans == 0) ? (0) : (ans--);
            }
            else if (logs[i] == "./")
            {
                continue;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};
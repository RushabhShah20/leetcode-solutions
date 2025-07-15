// Problem: Button with Longest Push Time
// Link to the problem: https://leetcode.com/problems/button-with-longest-push-time/
class Solution
{
public:
    int buttonWithLongestTime(vector<vector<int>> &events)
    {
        vector<int> ans;
        vector<vector<int>> x = events;
        for (int i = 1; i < events.size(); i++)
        {
            x[i][1] -= events[i - 1][1];
        }
        for (int i = 0; i < x.size(); i++)
        {
            cout << i + 1 << " " << x[i][0] << " " << x[i][1] << endl;
        }
        int maxDiff = INT_MIN;
        for (int i = 0; i < x.size(); i++)
        {
            maxDiff = max(maxDiff, x[i][1]);
        }
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i][1] == maxDiff)
            {
                ans.push_back(x[i][0]);
            }
        }
        return *min_element(ans.begin(), ans.end());
    }
};
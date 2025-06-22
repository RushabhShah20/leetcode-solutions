// Problem: Baseball Game
// Link to the problem: https://leetcode.com/problems/baseball-game/
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        int ans = 0;
        vector<int> a;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                a.push_back(a[a.size() - 1] + a[a.size() - 2]);
            }
            else if (operations[i] == "D")
            {
                a.push_back(2 * a[a.size() - 1]);
            }
            else if (operations[i] == "C")
            {
                a.pop_back();
            }
            else
            {
                a.push_back(stoi(operations[i]));
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            ans += a[i];
        }
        return ans;
    }
};
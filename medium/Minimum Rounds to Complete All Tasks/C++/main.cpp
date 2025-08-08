// Problem: Minimum Rounds to Complete All Tasks
// Link to the problem: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/
class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        int ans = 0;
        map<int, int> x;
        for (int i = 0; i < tasks.size(); i++)
        {
            x[tasks[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            y[i.second].push_back(i.first);
        }
        for (auto i : y)
        {
            if (i.first == 1)
            {
                return -1;
            }
            else
            {
                if (i.first % 3 == 1)
                {
                    ans += (i.second.size()) * (2 + ((i.first - 4) / 3));
                }
                else if (i.first % 3 == 2)
                {
                    ans += (i.second.size()) * (1 + ((i.first - 2) / 3));
                }
                else
                {
                    ans += (i.second.size()) * (i.first / 3);
                }
            }
        }
        return ans;
    }
};
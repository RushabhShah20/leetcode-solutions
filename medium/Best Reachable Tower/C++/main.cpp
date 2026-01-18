// Problem: Best Reachable Tower
// Link to the problem: https://leetcode.com/problems/best-reachable-tower/
class Solution
{
public:
    vector<int> bestTower(vector<vector<int>> &towers, vector<int> &center, int radius)
    {
        vector<vector<int>> a;
        for (const vector<int> &tower : towers)
        {
            if ((abs(tower[0] - center[0]) + abs(tower[1] - center[1])) <= radius)
            {
                a.push_back(tower);
            }
        }
        if (a.empty())
        {
            return {-1, -1};
        };
        sort(a.begin(), a.end(), [](const vector<int> &a, const vector<int> &b)
             {
            if(a[2]==b[2]){if(a[0]==b[0]){return a[1]<b[1];}else{return a[0]<b[0];}}else{return a[2]>b[2];} });
        return {a.front()[0], a.front()[1]};
    }
};
// Problem: Interval List Intersections
// Link to the problem: https://leetcode.com/problems/interval-list-intersections/
class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
    {
        vector<vector<int>> ans;
        int i = 0, j = 0, m = firstList.size(), n = secondList.size();
        while (i < m && j < n)
        {
            int x = max(firstList[i][0], secondList[j][0]), y = min(firstList[i][1], secondList[j][1]);
            if (x <= y)
            {
                ans.push_back({x, y});
            }
            if (firstList[i][1] < secondList[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
// Problem: Destination City
// Link to the problem: https://leetcode.com/problems/destination-city/
class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        string ans = "";
        map<string, string> m;
        for (vector<string> path : paths)
        {
            m[path[0]] = path[1];
        }
        for (pair<string, string> i : m)
        {
            if (m[i.second] == "")
            {
                return i.second;
            }
        }
        return ans;
    }
};
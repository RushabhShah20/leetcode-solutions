// Problem: Maximum Students on a Single Bench
// Link to the problem: https://leetcode.com/problems/maximum-students-on-a-single-bench/
class Solution
{
public:
    int maxStudentsOnBench(vector<vector<int>> &students)
    {
        const int n = students.size();
        int ans = 0;
        unordered_map<int, unordered_set<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[students[i][1]].insert(students[i][0]);
        }
        for (const pair<int, unordered_set<int>> i : m)
        {
            ans = max(ans, (int)i.second.size());
        }
        return ans;
    }
};

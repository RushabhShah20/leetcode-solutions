// Problem: Partition String
// Link to the problem: https://leetcode.com/problems/partition-string/
class Solution
{
public:
    vector<string> partitionString(string s)
    {
        vector<string> ans;
        unordered_set<string> seen;
        string a = "";
        for (int i = 0; i < s.size(); i++)
        {
            a += s[i];
            if (seen.find(a) == seen.end())
            {
                ans.push_back(a);
                seen.insert(a);
                a = "";
            }
        }
        return ans;
    }
};
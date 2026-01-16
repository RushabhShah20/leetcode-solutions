// Problem: Repeated DNA Sequences
// Link to the problem: https://leetcode.com/problems/repeated-dna-sequences/
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        const int n = s.size();
        unordered_map<string, int> m;
        for (int i = 0; i < n - 10 + 1; i++)
        {
            string x = s.substr(i, 10);
            m[x]++;
        }
        vector<string> ans;
        for (const pair<string, int> i : m)
        {
            if (i.second > 1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
// Problem: Check If a String Contains All Binary Codes of Size K
// Link to the problem: https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        const int n = s.size(), x = 1 << k;
        unordered_set<string> u;
        for (int i = 0; i + k <= n; i++)
        {
            u.insert(s.substr(i, k));
        }
        const int y = u.size();
        const bool ans = x == y;
        return ans;
    }
};
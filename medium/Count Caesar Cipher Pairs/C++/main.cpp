// Problem: Count Caesar Cipher Pairs
// Link to the problem: https://leetcode.com/problems/count-caesar-cipher-pairs/
class Solution
{
public:
    long long countPairs(vector<string> &words)
    {
        long long ans = 0;
        unordered_map<string, long long> m;
        for (const string &word : words)
        {
            int x = word[0] - 'a';
            string t = word;
            for (int i = 0; i < t.size(); i++)
            {
                int y = t[i] - 'a';
                int z = (y - x + 26) % 26;
                t[i] = (char)('a' + z);
            }
            ans += m[t];
            m[t]++;
        }
        return ans;
    }
};
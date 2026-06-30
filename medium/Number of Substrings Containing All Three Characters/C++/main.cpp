// Problem: Number of Substrings Containing All Three Characters
// Link to the problem: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        const int n = s.size();
        int ans = 0;
        vector<int> d(3, -1);
        for (int i = 0; i < n; i++)
        {
            d[s[i] - 'a'] = i;
            ans += 1 + min({d[0], d[1], d[2]});
        }
        return ans;
    }
};
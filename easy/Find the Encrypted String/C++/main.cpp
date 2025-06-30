// Problem: Find the Encrypted String
// Link to the problem: https://leetcode.com/problems/find-the-encrypted-string/
class Solution
{
public:
    string getEncryptedString(string s, int k)
    {
        string ans = "";
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            ans += s[(i + k) % (n)];
        }
        return ans;
    }
};